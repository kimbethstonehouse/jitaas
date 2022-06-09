#include <compiler.h>
#include <llvm/IR/Module.h>

extern "C" const char __stub_main;
extern "C" const char __stub_atoi;

extern "C" unsigned long __stub_main_size;
extern "C" unsigned long __stub_atoi_size;

void createLLVMIR(const WasmFunction *wasm) {
    llvm::LLVMContext llvmContext;
    llvm::Module llvmModule("", llvmContext);

    llvmModule.setDataLayout(wasm->target_data_layout());

    // Create LLVM external globals corresponding to the encoded function types for the function's type
//    llvmModule.global

    // todo: parse the payload and create an llvm module from that information

}

void Compiler::compile(const WasmFunction *wasm, NativeBinary *native) {
    createLLVMIR(wasm);
//    if (wasm->function_index() == 1) {
        native->set_data_bytes(&__stub_main, __stub_main_size);
        native->set_data_length(__stub_main_size);
//    } else {
//        native->set_data_bytes(&__stub_atoi, __stub_atoi_size);
//        native->set_data_length(__stub_atoi_size);
//    }
}