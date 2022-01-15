#include <3ds.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    gfxInitDefault();
    consoleInit(GFX_TOP, NULL);

    printf("Test");

    while (aptMainLoop()) {
        hidScanInput();

        // Flush and swap framebuffers
        gfxFlushBuffers();
        gfxSwapBuffers();

        gspWaitForVBlank();
    }

    gfxExit();
    return 0;
}