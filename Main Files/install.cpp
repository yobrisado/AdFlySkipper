#include <fstream>
#include <iostream>

using namespace std;

int main(){
    ofstream mymainfile ("main.py");
    ofstream myinstallfile ("install.cmd");
    char aspas = '"'; 
    char barras = '//';


    if (mymainfile.is_open())
  {
        mymainfile << "\nfrom requests import status_codes, get\nfrom time import ctime, sleep\nfrom getpass import getuser\nfrom os import system, environ\nimport platform\n";
        mymainfile << "username = getuser()\nmachine = environ['COMPUTERNAME']\nhoras = ctime().split()\nmy_os = ''\nmy_url = ''\n";
        mymainfile << "if platform.system() == 'Windows':\n    my_os = f'cls'\nelif platform.system() == 'Linux':\n    my_os = 'clear'\nelif platform.system() == 'Darwin':\n    my_os = 'clear'\n    system('clear')\n    print('SISTEMA NÃO SUPORTADO PELO APLICATIVO!!')\n    exit\n" ;
        mymainfile << "print('Digite o Link: ')\nlink = str(input(f'\033[1;31;44m{username}@{machine}\033[1;0;97m:~/\033[1;36m(Root)\033[1;97m $> \033[m '))\nnum_int = int(link.find('dest=')) + 5\nlink_int = int(len(link))\nonly_skip = link[num_int:link_int]\nonly_skip.replace('%2F', '/')\nurl_cl = only_skip.replace('%3A', ':').replace('%2F','/')\n" ;
        mymainfile << "def init_site(linque):\n    if platform.system() == 'Windows':\n        my_url = f'start {linque}'\n    elif platform.system() == 'Linux':\n        my_url = f'wget "<<aspas<<"{linque}"<<aspas<< "'\n" ;
        mymainfile << "if get(url_cl).status_code == 200:\n    print('O servidor esta disponivel.')\n    sleep(0.5)\n    print('Iniciando Download!')\n    barra = '\\\\'\n    system(my_os)\n    print('\033[1;34mBaixando . /\033[m')\n    sleep(0.3)\n    system(my_os)\n    print('\033[1;34mBaixando .. -\033[m')\n    sleep(0.3)\n    system(my_os)\n    print(f'\033[1;34mBaixando ...  {barra}\033[m')\n    sleep(0.3)\n    system(my_os)\n    sleep(0.3)\n    print('\033[1;34mBaixando . /\033[m')\n    sleep(0.3)\n    system(my_os)\n    print('\033[1;34mBaixando .. -\033[m')\n    sleep(0.3)\n    system(my_os)\n    print(f'\033[1;34mBaixando ... {barra}\033[m')\n    sleep(0.5)\n    system(my_os)\n    print('Arquivo baixado com sucesso!!')\n    sleep(0.5)\n    system(my_os)\n    init_site(url_cl)\n" ;
        mymainfile << "else:\n    print('O servidor está indisponivel.')\n    print('',end='')\nprint('O arquivo foi deletado do site!!')\n" ;
        mymainfile.close();
        cout << "Arquivo 1 foi baixado! 1/2";
  }
    else cout << "Unable to open file";
    

    if (myinstallfile.is_open())
  {
        myinstallfile << "@echo off\n" ; 
        myinstallfile << "PowerShell -Command "<<aspas<<"Invoke-WebRequest https:"<<barras<<barras<<"www.python.org/ftp/python/3.9.0/python-3.9.0b4-embed-amd64.zip -OutFile c:\\python.zip"<<aspas<<"\n" ; 
        myinstallfile << "PowerShell -Command "<<aspas<<"Invoke-WebRequest https:"<<barras<<barras<<"www.7-zip.org/a/7z2107-x64.exe -OutFile c:\\Users\\$env:UserName\\7zip.exe"<<aspas<<"\n" ; 
        myinstallfile << "PowerShell -Command "<<aspas<<"Invoke-WebRequest https:"<<barras<<barras<<"bootstrap.pypa.io/get-pip.py -OutFile c:\\Users\\$env:UserName\\get-pip.py"<<aspas<<"\n" ; 
        myinstallfile << "start %userprofile%\\7zip.exe /S\n" ; 
        myinstallfile << aspas<<"C:\\Program Files\\7-Zip\\7z.exe" <<aspas<< " e c:\\python.zip -oC:\\python\n" ; 
        myinstallfile << "C:\\python\\python.exe %userprofile%\\get-pip.py\n" ;
        myinstallfile << "timeout /T 10 /NOBREAK\n" ;
        myinstallfile << "pip install getpass3 --quiet\n" ;
        myinstallfile << "pip install requests --quiet\n" ;
        myinstallfile << "timeout /T 5\n" ;
        myinstallfile << "C:\\python\\python.exe main.py" ;
        myinstallfile.close();
        cout << "\nArquivo 2 foi baixado! 2/2";
  }
    else cout << "Unable to open file";
    system("start install.cmd");
    
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