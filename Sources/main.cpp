#include <math.h>
#include <stdio.h>

#define dynfunc extern "C" __declspec(dllexport)

dynfunc char* formats() {
	return "astc";
}

int astc_main(int argc, char **argv, int width, int height, int stride, int format, unsigned char* pixels, int* out_width, int* out_height, int* out_size, void** out_data);

dynfunc void encode(int width, int height, int stride, int format, unsigned char* pixels, int* out_width, int* out_height, int* out_size, void** out_data) {
	char* args[] = { "kraffiti-astc.dll", "-c" , "test.png", "test.astc", "6x6", "-medium", "-silentmode" };
	astc_main(7, args, width, height, stride, format, pixels, out_width, out_height, out_size, out_data);
}
