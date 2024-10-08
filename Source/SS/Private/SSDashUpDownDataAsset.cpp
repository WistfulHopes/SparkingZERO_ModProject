#include "SSDashUpDownDataAsset.h"

USSDashUpDownDataAsset::USSDashUpDownDataAsset() {
    this->MinTimeUpLp = 0.10f;
    this->EnableActionUpOT = 0.10f;
    this->MinTimeDownLp = 0.10f;
    this->EnableActionDownOT = 0.10f;
    this->EnableActionDownLanding = 0.10f;
    this->SpCostUpIN = 0.00f;
    this->SpCostUpLP = 0.00f;
    this->SpCostDownIN = 0.00f;
    this->SpCostDownLP = 0.00f;
}


