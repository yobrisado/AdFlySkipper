#include <iostream>


using namespace std;

int main () {
        system("sudo apt-get install wget -y");
        system("sudo apt-get install python3 -y");
        system("sudo apt-get install python3-pip -y");
        system("python -m pip install requests --quiet");
        system("python -m pip install getpass3 --quiet");
        system("sudo mkdir /home/AdFlySkipper");
        system("cd /home/AdFlySkipper/");
        system("sudo wget -O /home/AdFlySkipper/main.py https://raw.githubusercontent.com/yobrisado/AdFlySkipper/main/Linux_Version/main.py");
        system("touch /home/AdFlySkipper/AdFlySkipper.sh");
        system("echo 'sudo python3' > /home/AdFlySkipper/AdFlySkipper.sh");
        system("cd $HOME/Desktop");
        system("ln -s /home/AdFlySkipper/AdFlySkipper.sh AdFlySkipper");
        system("python3 /home/AdFlySkipper/main.py");
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

        A permissão é concedida, gratuitamente, a qualquer pessoa que obtenha uma cópia 
        deste software e dos arquivos de documentação associados (o "Software"), para lidar 
        com o Software sem restrições, incluindo sem limitação os direitos 
        de usar, copiar, modificar, mesclar, publicar, distribuir, sublicenciar e/ou vender 
        cópias do Software e permitir que as pessoas a quem o Software é 
        fornecido o façam, sujeito às seguintes condições:

        Aviso de direitos autorais e este aviso de permissão devem ser incluídos em todas as 
        cópias ou partes substanciais do Software. 

        O SOFTWARE É FORNECIDO "COMO ESTÁ", SEM GARANTIA DE QUALQUER TIPO, EXPRESSA OU
        IMPLÍCITA, INCLUINDO, MAS NÃO SE LIMITANDO ÀS GARANTIAS DE COMERCIALIZAÇÃO, 
        ADEQUAÇÃO A UM DETERMINADO FIM E NÃO VIOLAÇÃO. EM NENHUMA CIRCUNSTÂNCIA OS 
        AUTORES OU DETENTORES DE DIREITOS AUTORAIS SERÃO RESPONSÁVEIS POR QUALQUER REIVINDICAÇÃO, DANOS OU OUTRA 
        RESPONSABILIDADE, SEJA EM UMA AÇÃO DE CONTRATO, ATO ILÍCITO OU DE OUTRA FORMA, DECORRENTE DE, 
        DE OU EM CONEXÃO COM O SOFTWARE OU O USO OU OUTRAS NEGOCIAÇÕES NO 
        PROGRAMAS.

*/