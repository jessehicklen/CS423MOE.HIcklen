#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ArtworkCodeVS.generated.h"

UCLASS()
class MUSEUMOFEVILJH_API AArtworkCode : public AActor
{
    GENERATED_BODY()

public:
    AArtworkCode();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // Collider
    UPROPERTY(VisibleAnywhere)
    class UBoxComponent* CollisionBox;

    // Mesh on artwork
    UPROPERTY(VisibleAnywhere)
    class UStaticMeshComponent* ArtworkMesh;

    // Function for overlap
    UFUNCTION()
    void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp,
                        class AActor* OtherActor,
                        class UPrimitiveComponent* OtherComp,
                        int32 OtherBodyIndex,
                        bool bFromSweep,
                        const FHitResult& SweepResult);
};
