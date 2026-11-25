/* IL2CPP: HiddenBlockSystem$$HandleParticle
void HiddenBlockSystem__HandleParticle (HiddenBlockSystem_o* __this, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HiddenBlockSystem$$HandleParticle
   void HiddenBlockSystem__HandleParticle (HiddenBlockSystem_o* __this, Carrier_o* carrier, const
   MethodInfo* method); */

void HiddenBlockSystem__HandleParticle_23ea908
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,long param_6)

{
  undefined8 uVar1;
  float fVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uStack_60;
  float fStack_58;
  
  if ((bRam0000000004f4b61a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1d48);
    FUN_021f03f8(PTR_DAT_049c1d50);
    FUN_021f03f8(PTR_DAT_049c1d58);
    bRam0000000004f4b61a = 1;
  }
  fStack_58 = 0.0;
  uStack_60 = 0;
  if (*(long *)(param_5 + 0x80) != 0) {
    uVar3 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_5 + 0x80),param_6,&uStack_60,*(undefined8 *)PTR_DAT_049c1d50)
    ;
    fVar2 = fStack_58;
    uVar1 = uStack_60;
    if ((uVar3 & 1) == 0) {
                    /* try { // try from 024eaa68 to 025eaa7b has its CatchHandler @ 024eaad0 */
      return;
    }
    if (*(long *)(param_5 + 0x60) != 0) {
      uVar5 = *(undefined8 *)(param_5 + 0x68);
      uVar6 = *(undefined8 *)(*(long *)(param_5 + 0x60) + 0x30);
      if (cRam0000000004f4a55e == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a55e = '\x01';
      }
      if (param_6 != 0) {
                    /* try { // try from 024ea9d4 to 025ea9db has its CatchHandler @ 024eaadc */
        uVar9 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x18);
        fVar10 = *(float *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x20);
        lVar4 = UnityEngine_Component__get_transform_3c18724(param_6,0);
        if (lVar4 != 0) {
          fVar8 = (float)((ulong)uVar1 >> 0x20) + (float)((ulong)uVar9 >> 0x20);
                    /* try { // try from 024ea9f4 to 025eaa3f has its CatchHandler @ 024eaae0 */
          uVar7 = UnityEngine_Transform__get_rotation_3c2d7a8(lVar4,0);
                    /* try { // try from 024eaa40 to 025eaa67 has its CatchHandler @ 024ea8f0 */
          PrefabModuleExtensions__Rent_object__269ee8c
                    (CONCAT44(fVar8,(float)uVar1 + (float)uVar9),fVar8,fVar2 + fVar10,uVar7,param_2,
                     param_3,param_4,uVar5,uVar6,*(undefined8 *)PTR_DAT_049c1d58);
          if (*(long *)(param_5 + 0x80) != 0) {
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
                      (*(long *)(param_5 + 0x80),param_6,*(undefined8 *)PTR_DAT_049c1d48);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

