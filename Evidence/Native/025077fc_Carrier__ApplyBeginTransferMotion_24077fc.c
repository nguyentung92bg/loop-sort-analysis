/* IL2CPP: Carrier$$ApplyBeginTransferMotion
void Carrier__ApplyBeginTransferMotion (Carrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Carrier$$ApplyBeginTransferMotion
   void Carrier__ApplyBeginTransferMotion (Carrier_o* __this, const MethodInfo* method); */

void Carrier__ApplyBeginTransferMotion_24077fc
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  ushort uVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  
  if ((bRam0000000004f4b6c1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c20a0);
    FUN_021f03f8(PTR_DAT_049c2688);
    FUN_021f03f8(PTR_DAT_049c2690);
    FUN_021f03f8(PTR_DAT_049c2698);
    bRam0000000004f4b6c1 = 1;
  }
  if (*(char *)(param_4 + 0x1b6) != '\0') {
                    /* try { // try from 02507ab0 to 02607c4f has its CatchHandler @ 025075e0 */
    return;
  }
  if (*(long *)(param_4 + 0xb0) != 0) {
    LitMotion_CompositeMotionHandle__Cancel_2e8aef0(*(long *)(param_4 + 0xb0),0);
    lVar6 = UnityEngine_Component__get_transform_3c18724(param_4,0);
    puVar2 = PTR_DAT_049c2688;
    lVar11 = *(long *)PTR_DAT_049c2688;
    lVar9 = *(long *)(lVar11 + 0x20);
    uVar1 = *(ushort *)(lVar9 + 0x135);
    if ((uVar1 & 1) == 0) {
      FUN_02229718(lVar9);
      lVar9 = *(long *)(lVar11 + 0x20);
      uVar1 = *(ushort *)(lVar9 + 0x135);
    }
    if ((uVar1 & 1) == 0) {
      lVar9 = FUN_02229718(lVar9);
    }
    thunk_FUN_0224e54c(param_4 + 0x1c0,
                       *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x20);
    lVar9 = *(long *)(*(long *)PTR_DAT_049c2698 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02229718();
    }
    pcVar7 = (char *)thunk_FUN_0224e54c(param_4 + 0x1c0,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80));
    if (*pcVar7 == '\0') {
      if (lVar6 == 0) goto LAB_02507abc;
      uStack_6c = UnityEngine_Transform__get_position_3c2d540(lVar6,0);
      uStack_80 = 0;
      uStack_78 = 0;
      fStack_68 = param_2;
      fStack_64 = param_3;
      System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                (&uStack_80,&uStack_6c,*(undefined8 *)PTR_DAT_049c2690);
      *(undefined8 *)(param_4 + 0x1c8) = uStack_78;
      *(undefined8 *)(param_4 + 0x1c0) = uStack_80;
    }
    lVar10 = *(long *)puVar2;
    lVar11 = *(long *)(lVar10 + 0x20);
    uVar1 = *(ushort *)(lVar11 + 0x135);
    lVar9 = lVar11;
    if ((uVar1 & 1) == 0) {
      lVar11 = FUN_02229718(lVar11);
      lVar9 = *(long *)(lVar10 + 0x20);
                    /* try { // try from 02507984 to 0260798b has its CatchHandler @ 0250800c */
      uVar1 = *(ushort *)(lVar9 + 0x135);
    }
    uVar12 = *(undefined4 *)(**(long **)(lVar11 + 0xc0) + 0xfc);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 025079a4 to 026079ef has its CatchHandler @ 02508050 */
      lVar9 = FUN_02229718(lVar9);
    }
    uVar8 = thunk_FUN_0224e54c(param_4 + 0x1c0,
                               *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x20);
    func_0x04608620(&uStack_80,uVar8,uVar12);
    if (lVar6 != 0) {
      fVar3 = (float)uStack_80;
      fVar4 = uStack_80._4_4_;
      fVar5 = (float)uStack_78;
      uVar12 = UnityEngine_Transform__get_position_3c2d540(lVar6,0);
      fVar14 = param_2;
      fVar15 = param_3;
                    /* try { // try from 025079f0 to 02607a3b has its CatchHandler @ 025075e0 */
      fVar13 = (float)UnityEngine_Transform__get_forward_3c2db78(lVar6,0);
                    /* try { // try from 02507a3c to 02607a3f has its CatchHandler @ 02507ff4 */
      auVar16 = LitMotion_LMotion__Create_2eaa1b4
                          (uVar12,param_2,param_3,fVar3 - fVar13 * _UNK_013aa810,
                           fVar4 - fVar14 * _UNK_013aa810,fVar5 - fVar15 * _UNK_013aa810,
                           _UNK_013aa62c,0);
      auVar16 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                          (auVar16._0_8_,auVar16._8_8_,lVar6,*(undefined8 *)PTR_DAT_049c20a0);
      if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
        FUN_021f0574();
      }
                    /* try { // try from 02507a80 to 02607aaf has its CatchHandler @ 02508048 */
      auVar16 = Extensions__AddTo_24d83f4(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,param_4,0);
      LitMotion_MotionHandleExtensions__AddTo_2eacb44
                (auVar16._0_8_,auVar16._8_8_ & 0xffffffff,*(undefined8 *)(param_4 + 0xb0),0);
      return;
    }
  }
LAB_02507abc:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

