#include "MainMenuWidget.h"
#include "Components/Button.h"
#include "Kismet/KismetSystemLibrary.h"

void UMainMenuWidget::NativeConstruct()
{
    Super::NativeConstruct();

    if (Button_Exit)
    {
        Button_Exit->OnClicked.AddDynamic(this, &UMainMenuWidget::OnExitClicked);
    }
}

void UMainMenuWidget::OnExitClicked()
{
    UWorld* World = GetWorld();
    if (World)
    {
        UKismetSystemLibrary::QuitGame(World, nullptr, EQuitPreference::Quit, false);
    }
}
