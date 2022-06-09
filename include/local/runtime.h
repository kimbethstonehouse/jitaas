#pragma once

#include <string>
#include <map>
#include <static-module.h>
#include <runtime-module.h>
#include <function.h>
#include <memory>
#include <jitaas.h>
#include <jitaas.grpc.pb.h>
#include <client.h>
#include <llvm/Target/TargetMachine.h>

// TODO: fix args and ret types
extern "C" int trampoline_to_execute(int function_index, void **jump_table_, int argc, char **argv, void *runtime_);
extern "C" void trampoline_to_compile(int, void *, void *);

class Runtime {
public:
    Runtime(JacarandaClient *client);
    ~Runtime();
    void load_module(const std::string &filename);
    void run(const std::string &filename, int argc, char **argv);
    void *request_compilation(int function_index);
    void create_target_machine();
private:
    void init_execution_state(int function_count);
    NativeBinary compilation_rpc(NativeBinary bin);

    std::map<std::string, std::shared_ptr<StaticModule>> static_modules_;
    RuntimeModule *runtime_module_;
    JacarandaClient *client_;
    llvm::TargetMachine *target_machine_;
    char *code_section_;
    char *next_function_;
    void **jump_table_;
};