#pragma once

#include <agl/Utils/aglParameter.h>
#include "KingSystem/Resource/GeneralParamList/resGParamListObject.h"
#include "KingSystem/Utils/Types.h"

namespace ksys::res {

class GParamListObjectSpear : public GParamListObject {
public:
    GParamListObjectSpear();
    const char* getName() const override { return "Spear"; }

    agl::utl::Parameter<sead::SafeString> mPodName;
    agl::utl::Parameter<sead::Vector3f> mPlayerHoldTransOffset;
    agl::utl::Parameter<sead::Vector3f> mPlayerHoldRotOffset;
    agl::utl::Parameter<sead::Vector3f> mPlayerEquipTransOffset;
    agl::utl::Parameter<sead::Vector3f> mPlayerEquipRotOffset;
    agl::utl::Parameter<sead::Vector3f> mRideHorsePlayerHoldTransOffset;
    agl::utl::Parameter<sead::Vector3f> mRideHorsePlayerHoldRotOffset;
    agl::utl::Parameter<sead::Vector3f> mAffectTransOffsetShield;
    agl::utl::Parameter<sead::Vector3f> mAffectRotOffsetShield;
    agl::utl::Parameter<sead::Vector3f> mAffectTransOffsetBow;
    agl::utl::Parameter<sead::Vector3f> mAffectRotOffsetBow;
    agl::utl::Parameter<sead::Vector3f> mGrabPlayerHoldTransOffset;
    agl::utl::Parameter<sead::Vector3f> mGrabPlayerHoldRotOffset;
    agl::utl::Parameter<sead::Vector3f> mGrabAffectTransOffsetShield;
    agl::utl::Parameter<sead::Vector3f> mGrabAffectRotOffsetShield;
    agl::utl::Parameter<sead::Vector3f> mSquatPlayerHoldTransAddOffset;
    agl::utl::Parameter<sead::Vector3f> mSquatPlayerHoldRotAddOffset;
    agl::utl::Parameter<sead::Vector3f> mNPCHoldTransOffset;
    agl::utl::Parameter<sead::Vector3f> mNPCHoldRotOffset;
    agl::utl::Parameter<sead::Vector3f> mNPCEquipTransOffset;
    agl::utl::Parameter<sead::Vector3f> mNPCEquipRotOffset;
    agl::utl::Parameter<sead::Vector3f> mEnemyEquipTransOffset;
    agl::utl::Parameter<sead::Vector3f> mEnemyEquipRotOffset;
    agl::utl::Parameter<sead::Vector3f> mStandEquipTransOffset;
    agl::utl::Parameter<sead::Vector3f> mStandEquipRotOffset;
    agl::utl::Parameter<sead::SafeString> mWeaponSubType;
};
KSYS_CHECK_SIZE_NX150(GParamListObjectSpear, 0x448);

inline GParamListObjectSpear::GParamListObjectSpear() {
    auto* const obj = &mObj;

    mPodName.init("", "PodName", "", obj);
    mPlayerHoldTransOffset.init({-0.9, -0.02, 0.52}, "PlayerHoldTransOffset", "", obj);
    mPlayerHoldRotOffset.init({0.0, -120.0, -180.0}, "PlayerHoldRotOffset", "", obj);
    mPlayerEquipTransOffset.init({0.0, 0.0, 0.0}, "PlayerEquipTransOffset", "", obj);
    mPlayerEquipRotOffset.init({0.0, 0.0, 0.0}, "PlayerEquipRotOffset", "", obj);
    mRideHorsePlayerHoldTransOffset.init({0.0, 0.0, 0.0}, "RideHorsePlayerHoldTransOffset", "",
                                         obj);
    mRideHorsePlayerHoldRotOffset.init({0.0, 0.0, 0.0}, "RideHorsePlayerHoldRotOffset", "", obj);
    mAffectTransOffsetShield.init({0.0, 0.0, 0.0}, "AffectTransOffsetShield", "", obj);
    mAffectRotOffsetShield.init({0.0, 0.0, 0.0}, "AffectRotOffsetShield", "", obj);
    mAffectTransOffsetBow.init({0.0, 0.0, 0.0}, "AffectTransOffsetBow", "", obj);
    mAffectRotOffsetBow.init({0.0, 0.0, 0.0}, "AffectRotOffsetBow", "", obj);
    mGrabPlayerHoldTransOffset.init({-0.87, -0.17, -0.34}, "GrabPlayerHoldTransOffset", "", obj);
    mGrabPlayerHoldRotOffset.init({-60.0, -20.0, -90.0}, "GrabPlayerHoldRotOffset", "", obj);
    mGrabAffectTransOffsetShield.init({0.0, -0.03, 0.0}, "GrabAffectTransOffsetShield", "", obj);
    mGrabAffectRotOffsetShield.init({-5.0, 0.0, 0.0}, "GrabAffectRotOffsetShield", "", obj);
    mSquatPlayerHoldTransAddOffset.init({0.0, 0.0, 0.0}, "SquatPlayerHoldTransAddOffset", "", obj);
    mSquatPlayerHoldRotAddOffset.init({0.0, 0.0, 0.0}, "SquatPlayerHoldRotAddOffset", "", obj);
    mNPCHoldTransOffset.init({0.0, 0.0, 0.0}, "NPCHoldTransOffset", "", obj);
    mNPCHoldRotOffset.init({0.0, 0.0, 0.0}, "NPCHoldRotOffset", "", obj);
    mNPCEquipTransOffset.init({0.0, 0.0, 0.0}, "NPCEquipTransOffset", "", obj);
    mNPCEquipRotOffset.init({0.0, 0.0, 0.0}, "NPCEquipRotOffset", "", obj);
    mEnemyEquipTransOffset.init({0.0, 0.0, 0.0}, "EnemyEquipTransOffset", "", obj);
    mEnemyEquipRotOffset.init({0.0, 0.0, 0.0}, "EnemyEquipRotOffset", "", obj);
    mStandEquipTransOffset.init({0.0, 0.0, 0.0}, "StandEquipTransOffset", "", obj);
    mStandEquipRotOffset.init({0.0, 0.0, 0.0}, "StandEquipRotOffset", "", obj);
    mWeaponSubType.init("", "WeaponSubType", "", obj);
}

}  // namespace ksys::res
