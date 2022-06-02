#include <compiler.h>

extern "C" const char __stub_main;
extern "C" const char __stub_atoi;

extern "C" unsigned long __stub_main_size;
extern "C" unsigned long __stub_atoi_size;

void Compiler::compile(const RequestCompilationMessage *wasm, Binary *native) {
    if (wasm->function_index() == 1) {
        native->set_data_bytes(&__stub_main, __stub_main_size);
        native->set_data_length(__stub_main_size);
    } else {
        native->set_data_bytes(&__stub_atoi, __stub_atoi_size);
        native->set_data_length(__stub_atoi_size);
    }
}