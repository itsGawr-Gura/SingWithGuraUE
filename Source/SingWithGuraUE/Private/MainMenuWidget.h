#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenuWidget.generated.h"


class UButton;

UCLASS() //����. ���. �������
class SINGWITHGURAUE_API UMainMenuWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    virtual void NativeConstruct() override;

protected:
    // �������� � ������ ������ � ������� �������
    UPROPERTY(meta = (BindWidget))
    UButton* Button_Exit;

    // ���������� ������� ������
    UFUNCTION()
    void OnExitClicked();

};

