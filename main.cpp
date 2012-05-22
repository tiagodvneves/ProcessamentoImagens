#include <iostream>

#include "include/imagem.h"
#include "include/excecoes.h"
#include <string.h>
//#include "include/gui/frame.h"

using namespace std;

int main(int argc, char **argv)
{

    try {

        puts("Hello World");

        const char* img = argv[2];

        Imagem imagem(img);

        if (strcmp(argv[1], "redimensionar") == 0){

            int x = atoi(argv[3]);
            int y = atoi(argv[4]);

            imagem.redimensionar(x, y);

        } else if (strcmp(argv[1], "converter") == 0){

            const char* formatoConst = argv[3];

            const char* localConst = imagem.getLocal();

            imagem.converter(trocarExtensao(&localConst[0], &formatoConst[0]));

        }

        //Imagem imagem2("imagens/Penguins.jpg");
        //imagem2.converter("imagens/Penguins.png");

        //MyFrame1 frame(NULL);

    }catch(FileNotFoundException fnf) {

        printf("%s", fnf.obterMensagem());

    }

    return 0;
}

const char* trocarExtensao(char* local, char* extensao) {

    char* ultimoPonto = strrchr(local, '.');

    char* localSemExtensao;

    strncpy(localSemExtensao, local, ultimoPonto - local);

    strcpy(localSemExtensao, ultimoPonto);

    return &localSemExtensao[0];

}

/*#include <iostream>

using namespace std;

#include "cv.h"
#include "highgui.h"

int main(int argc, char **argv)
{
    IplImage *pImg;

    if (argc == 1) {

        if (pImg = cvLoadImage("Penguins.jpg", 1)) {

            cvNamedWindow("Image", 1);
            cvShowImage("Image", pImg);

            cvWaitKey(0);

            cvDestroyWindow("Image");
            cvReleaseImage(&pImg);

            return 0;

        }

        return -1;

    }

    return -1;

}*/
