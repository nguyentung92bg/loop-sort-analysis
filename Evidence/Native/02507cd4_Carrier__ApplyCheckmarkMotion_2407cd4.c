/* IL2CPP: Carrier$$ApplyCheckmarkMotion
void Carrier__ApplyCheckmarkMotion (Carrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$ApplyCheckmarkMotion
   void Carrier__ApplyCheckmarkMotion (Carrier_o* __this, const MethodInfo* method); */

void Carrier__ApplyCheckmarkMotion_2407cd4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
                    /* try { // try from 02507cd8 to 02607cdb has its CatchHandler @ 02508014 */
  if ((bRam0000000004f4b6c3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c27e8);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c1358);
                    /* try { // try from 02507d1c to 02607d4b has its CatchHandler @ 02508010 */
    FUN_021f03f8(PTR_DAT_049c1680);
    bRam0000000004f4b6c3 = 1;
  }
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  lVar6 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                    (*(undefined8 *)(param_1 + 0xe8),0xa35119b7,0);
                    /* try { // try from 02507d4c to 02607e5f has its CatchHandler @ 025075e0 */
  if ((lVar6 != 0) &&
     (lVar7 = UnityEngine_Component__get_gameObject_3c187f4(lVar6,0), puVar5 = PTR_DAT_049c27e8,
     puVar4 = PTR_DAT_049c1680, puVar3 = PTR_DAT_049c1670, puVar2 = PTR_DAT_049c1358, lVar7 != 0)) {
    UnityEngine_GameObject__SetActive_3c1ce34(lVar7,1,0);
    lVar6 = UnityEngine_Component__get_transform_3c18724(lVar6,0);
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    puVar1 = PTR_DAT_049bbf90;
    lVar7 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    auStack_50 = LitMotion_LMotion__Create_2eaa1b4
                           (*(float *)(lVar7 + 0xc) + *(float *)(lVar7 + 0xc),
                            *(float *)(lVar7 + 0x10) + *(float *)(lVar7 + 0x10),
                            *(float *)(lVar7 + 0x14) + *(float *)(lVar7 + 0x14),0);
    auVar9 = FUN_024f4e50(auStack_50,0x1b,*(undefined8 *)puVar4);
    LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
              (auVar9._0_8_,auVar9._8_8_,lVar6,*(undefined8 *)puVar3);
    auStack_60 = LitMotion_LMotion__Create_2ea9f9c(0x41200000,0,0x3f000000,0);
    auVar9 = FUN_024f4e50(auStack_60,0x1b,*(undefined8 *)puVar2);
    LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalEulerAnglesZ___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2671254
              (auVar9._0_8_,auVar9._8_8_,lVar6,*(undefined8 *)puVar5);
    if (cRam0000000004f4a233 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a233 = '\x01';
    }
                    /* try { // try from 02507e60 to 02607e67 has its CatchHandler @ 02508008 */
    if (lVar6 != 0) {
      puVar8 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
      UnityEngine_Transform__set_localScale_3c2ddfc(*puVar8,puVar8[1],puVar8[2],lVar6,0);
                    /* try { // try from 02507e80 to 02607ecb has its CatchHandler @ 02508084 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

