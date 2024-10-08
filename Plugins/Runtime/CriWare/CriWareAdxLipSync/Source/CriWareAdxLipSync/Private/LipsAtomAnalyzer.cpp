#include "LipsAtomAnalyzer.h"

ULipsAtomAnalyzer::ULipsAtomAnalyzer() {
    this->AtomComponent = NULL;
}

bool ULipsAtomAnalyzer::IsAttached() {
    return false;
}

ELipsAtomAnalyzerReadoutStatus ULipsAtomAnalyzer::GetReadoutStatus() const {
    return ELipsAtomAnalyzerReadoutStatus::Stop;
}

ELipsAtomAnalyzerProcessStatus ULipsAtomAnalyzer::GetProcessStatus() const {
    return ELipsAtomAnalyzerProcessStatus::Stop;
}

void ULipsAtomAnalyzer::Detach() {
}

void ULipsAtomAnalyzer::Attach(UAtomComponent* InAtomComponent) {
}


