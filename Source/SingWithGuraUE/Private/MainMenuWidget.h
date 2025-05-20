#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenuWidget.generated.h"


class UButton;

UCLASS() //фиол. выд. макросы
class SINGWITHGURAUE_API UMainMenuWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    virtual void NativeConstruct() override;

protected:
    // Привязка к кнопке выхода с помошью макроса
    UPROPERTY(meta = (BindWidget))
    UButton* Button_Exit;

    // Обработчик нажатия кнопки
    UFUNCTION()
    void OnExitClicked();

};

