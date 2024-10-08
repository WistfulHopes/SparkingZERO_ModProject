#include "SSDragonAdventureIFChartDataAsset.h"
#include "SSDragonAdventureIFChartSelecterByPad.h"

USSDragonAdventureIFChartDataAsset::USSDragonAdventureIFChartDataAsset() {
    this->SelecterByPad = ASSDragonAdventureIFChartSelecterByPad::StaticClass();
}

void USSDragonAdventureIFChartDataAsset::MigrateData() {
}


