#include "ArtworkCodeVS.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"

AArtworkCode::AArtworkCode()
{
    PrimaryActorTick.bCanEverTick = true;

    CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
    RootComponent = CollisionBox;

    ArtworkMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ArtworkMesh"));
    ArtworkMesh->SetupAttachment(RootComponent);

    CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AArtworkCode::OnOverlapBegin);
}

void AArtworkCode::BeginPlay()
{
    Super::BeginPlay();
}

void AArtworkCode::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AArtworkCode::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
                                  UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
                                  bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor && OtherActor != this)
    {
        int32 RandomChoice = FMath::RandRange(0, 2);

        switch (RandomChoice)
        {
            case 0:
                // Do nothing
                break;
            case 1:
                // Change material 
                if (ArtworkMesh)
                {
                    UE_LOG(LogTemp, Warning, TEXT("Artwork changed picture"));
                }
                break;
            case 2:
                // Teleport player
                FVector RandomLocation = FVector(FMath::RandRange(-500, 500), FMath::RandRange(-500, 500), 100);
                OtherActor->SetActorLocation(RandomLocation);
                UE_LOG(LogTemp, Warning, TEXT("Player teleported"));
                break;
        }
    }
}
