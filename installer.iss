; Inno Setup 6 Script
; DroneFlames PC Port Installer & Updater by @good_boy_irl

#ifndef MyAppVersion
  #define MyAppVersion "0.33.5.43-test"
#endif
#define MyAppPublisher "@droneflamesmod"
#define MyAppURL "https://github.com/makkaX2/DroneFlames-PC-Port"
#define MyAppExeName "DroneFlames.exe"
#ifdef TestBuild
  #define MyAppName "DroneFlames Test"
  #define MyAppDir "DroneFlames Test"
  #define MyAppId "{{0276A420-DFA8-47C3-9FC1-E72F40694858}}"
  #define MyFileVersion Copy(MyAppVersion, 1, Pos("-test", MyAppVersion) - 1)
#else
  #define MyAppName "DroneFlames"
  #define MyAppDir "DroneFlames"
  #define MyAppId "{{9F5C24D1-A12E-4D78-831C-6BE3E71AA190}}"
  #define MyFileVersion MyAppVersion
#endif

#ifndef SourceDir
  #define SourceDir "build\DroneFlames_PC_v0.33.5.43-test_droneflamesmod"
#endif

#ifndef OutDir
  #define OutDir "dist"
#endif

[Setup]
AppId={#MyAppId}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
AppVerName={#MyAppName} v{#MyAppVersion} (PC Port by {#MyAppPublisher})
AppPublisher=droneflamesmod
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName={autopf}\{#MyAppDir}
DefaultGroupName={#MyAppName} (PC Port by {#MyAppPublisher})
AllowNoIcons=yes
OutputDir={#OutDir}
OutputBaseFilename=DroneFlames_PC_Setup_v{#MyAppVersion}_droneflamesmod
SetupIconFile=app_icon.ico
Compression=lzma2/ultra64
SolidCompression=yes
ArchitecturesAllowed=x64compatible
ArchitecturesInstallIn64BitMode=x64compatible
PrivilegesRequired=lowest
PrivilegesRequiredOverridesAllowed=dialog commandline

; Auto-Update and In-Place Upgrade Settings
UsePreviousAppDir=yes
UsePreviousGroup=yes
UsePreviousTasks=yes
DisableDirPage=auto
CloseApplications=yes
CloseApplicationsFilter=DroneFlames.exe,DroneFlames_console.exe
RestartApplications=no
AppMutex=DroneFlames_PC_Port_good_boy_irl

; UI Styling
WizardStyle=modern
WizardImageFile=installer_banner.bmp
WizardSmallImageFile=installer_small.bmp
InfoBeforeFile=installer_info.txt
DisableWelcomePage=no
UninstallDisplayIcon={app}\app_icon.ico
UninstallDisplayName={#MyAppName} v{#MyAppVersion} (PC Port by {#MyAppPublisher})

; File metadata
VersionInfoVersion={#MyFileVersion}
VersionInfoCompany={#MyAppPublisher}
VersionInfoDescription=DroneFlames PC Port Installer & Updater by {#MyAppPublisher}
VersionInfoProductName={#MyAppName} PC Port
VersionInfoProductVersion={#MyFileVersion}
VersionInfoCopyright=PC Port created by {#MyAppPublisher}

[Languages]
Name: "russian"; MessagesFile: "compiler:Languages\Russian.isl"
Name: "english"; MessagesFile: "compiler:Default.isl"

[CustomMessages]
russian.LaunchProgramTitle=Запустить DroneFlames (PC Port by @droneflamesmod)
russian.CreditsTitle=Авторство и особенности порта (@good_boy_irl)
russian.DebugModeTitle=DroneFlames (Консоль и логи отладки)
russian.DesktopShortcut=Создать ярлык на Рабочем столе
russian.WelcomeTitle=Вас приветствует установка DroneFlames (PC Port by @droneflamesmod)
russian.WelcomeSubtitle=Программа установит DroneFlames v{#MyAppVersion} на ваш компьютер.%n%nПорт на ПК полностью подготовлен и проверен автором @good_boy_irl.%n%n• Разблокированы все 99 предметов кастомизации%n• Включён режим разработчика (Dev Mode) и Perf Probe%n• Нативная поддержка мультиплеера по WebRTC%n• Чистый и безопасный исходный код%n• Поддержка полноэкранного режима по F11, WASD, плавного зума%n%nДля продолжения нажмите «Далее».

english.LaunchProgramTitle=Launch DroneFlames (PC Port by @droneflamesmod)
english.CreditsTitle=Port Credits & Information (@good_boy_irl)
english.DebugModeTitle=DroneFlames (Debug Console Mode)
english.DesktopShortcut=Create a desktop shortcut
english.WelcomeTitle=Welcome to DroneFlames Setup (PC Port by @droneflamesmod)
english.WelcomeSubtitle=Setup will install DroneFlames v{#MyAppVersion} on your computer.%n%nNative PC Port prepared and verified by @droneflamesmod.%n%n• All 99 cosmetics & Dev titles unlocked%n• Developer Mode & Perf Probe enabled%n• Windows Native WebRTC multiplayer%n• 100% clean and safe decompiled code%n• F11 fullscreen, WASD camera, smooth zoom%n%nClick Next to continue.

[Messages]
russian.WelcomeLabel1={cm:WelcomeTitle}
russian.WelcomeLabel2={cm:WelcomeSubtitle}
english.WelcomeLabel1={cm:WelcomeTitle}
english.WelcomeLabel2={cm:WelcomeSubtitle}

[Tasks]
Name: "desktopicon"; Description: "{cm:DesktopShortcut}"; GroupDescription: "{cm:AdditionalIcons}"

[Files]
Source: "{#SourceDir}\*"; DestDir: "{app}"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "PORT_CREDITS_good_boy_irl.txt"; DestDir: "{app}"; Flags: ignoreversion
Source: "PORT_BY_GOOD_BOY_IRL.txt"; DestDir: "{app}"; Flags: ignoreversion
Source: "app_icon.ico"; DestDir: "{app}"; Flags: ignoreversion

[Icons]
; Main application shortcut
Name: "{group}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Parameters: "--path ""{app}"""; WorkingDir: "{app}"; IconFilename: "{app}\app_icon.ico"
Name: "{autodesktop}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Parameters: "--path ""{app}"""; WorkingDir: "{app}"; IconFilename: "{app}\app_icon.ico"; Tasks: desktopicon

; Debug Console Launcher
Name: "{group}\{cm:DebugModeTitle}"; Filename: "{app}\DroneFlames_console.exe"; Parameters: "--path ""{app}"""; WorkingDir: "{app}"; IconFilename: "{app}\app_icon.ico"

; Credits & Release info
Name: "{group}\{cm:CreditsTitle}"; Filename: "{app}\PORT_CREDITS_good_boy_irl.txt"

; Native Uninstall Shortcut
Name: "{group}\{cm:UninstallProgram,{#MyAppName}}"; Filename: "{uninstallexe}"

[Run]
Filename: "{app}\{#MyAppExeName}"; Parameters: "--path ""{app}"""; WorkingDir: "{app}"; Description: "{cm:LaunchProgramTitle}"; Flags: nowait postinstall skipifsilent

[Code]
// Функция проверки установленной предыдущей версии игры
function GetInstalledVersion(): String;
var
  InstalledVer: String;
begin
  InstalledVer := '';
  if not RegQueryStringValue(HKEY_CURRENT_USER, 'Software\Microsoft\Windows\CurrentVersion\Uninstall\{#MyAppId}_is1', 'DisplayVersion', InstalledVer) then
    RegQueryStringValue(HKEY_LOCAL_MACHINE, 'Software\Microsoft\Windows\CurrentVersion\Uninstall\{#MyAppId}_is1', 'DisplayVersion', InstalledVer);
  Result := InstalledVer;
end;

function IsUpgrade(): Boolean;
begin
  Result := (GetInstalledVersion() <> '');
end;

procedure InitializeWizard();
var
  OldVer: String;
begin
  OldVer := GetInstalledVersion();
  if OldVer <> '' then
  begin
    WizardForm.Caption := 'Обновление DroneFlames (PC Port by @droneflamesmod)';
    WizardForm.WelcomeLabel1.Caption := 'Обновление DroneFlames (PC Port by @droneflamesmod)';
    WizardForm.WelcomeLabel2.Caption := 
      'На компьютере обнаружена установленная версия игры (' + OldVer + ').' + #13#10 + #13#10 +
      'Этот установщик обновит существующую версию DroneFlames до актуальной v{#MyAppVersion}.' + #13#10 + #13#10 +
      '• Все файлы игры будут безопасно заменены на новые.' + #13#10 +
      '• Ваши сохранения, статистика профиля и прогресс останутся нетронутыми.' + #13#10 +
      '• Переустанавливать игру заново не требуется.' + #13#10 + #13#10 +
      'Нажмите «Далее», чтобы применить обновление.';
  end;
end;
