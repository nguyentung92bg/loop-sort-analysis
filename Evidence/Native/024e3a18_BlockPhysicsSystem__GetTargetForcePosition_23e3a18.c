/* IL2CPP: BlockPhysicsSystem$$GetTargetForcePosition
UnityEngine_Vector3_o BlockPhysicsSystem__GetTargetForcePosition (BlockPhysicsSystem_o* __this, UnityEngine_Vector3_o position, int32_t* bestIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockPhysicsSystem$$GetTargetForcePosition
   UnityEngine_Vector3_o BlockPhysicsSystem__GetTargetForcePosition (BlockPhysicsSystem_o* __this,
   UnityEngine_Vector3_o position, int32_t* bestIndex, const MethodInfo* method); */

float BlockPhysicsSystem__GetTargetForcePosition_23e3a18
                (float param_1,float param_2,float param_3,long param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  ulong uVar13;
  char cVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  float *pfVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  long lStack_90;
  ulong uStack_88;
  
                    /* try { // try from 024e3a2c to 025e3a47 has its CatchHandler @ 024e4058 */
                    /* try { // try from 024e3a48 to 025e3a57 has its CatchHandler @ 024e4034 */
  if ((bRam0000000004f4b5f0 & 1) == 0) {
                    /* try { // try from 024e3a64 to 025e3a6f has its CatchHandler @ 024e4028 */
    FUN_021f03f8(PTR_DAT_049c18d0);
                    /* try { // try from 024e3a70 to 025e3a7f has its CatchHandler @ 024e4020 */
    FUN_021f03f8(PTR_DAT_049bbda8);
    FUN_021f03f8(PTR_DAT_049bbdb0);
    bRam0000000004f4b5f0 = 1;
  }
                    /* try { // try from 024e3a8c to 025e3a8f has its CatchHandler @ 024e402c */
  fVar26 = *(float *)(param_4 + 0x98);
  lStack_90 = 0;
                    /* try { // try from 024e3a98 to 025e3aa3 has its CatchHandler @ 024e4038 */
  if (cRam0000000004f49d58 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f49d58 = '\x01';
  }
  puVar9 = PTR_DAT_049b8758;
  fVar26 = param_1 / fVar26;
                    /* try { // try from 024e3ab4 to 025e3abb has its CatchHandler @ 024e403c */
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
                    /* try { // try from 024e3ad0 to 025e3adb has its CatchHandler @ 024e4030 */
    FUN_021f0574();
    cVar14 = cRam0000000004f49d58;
  }
  else {
    cVar14 = '\x01';
  }
  fVar27 = *(float *)(param_4 + 0x98);
  iVar3 = 0;
  if ((float)(int)fVar26 != INFINITY) {
    iVar3 = (int)fVar26;
  }
  if (cVar14 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
                    /* try { // try from 024e3b0c to 025e3b8f has its CatchHandler @ 024e3fec */
    cRam0000000004f49d58 = '\x01';
  }
  fVar27 = param_2 / fVar27;
  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
    FUN_021f0574();
    bVar12 = cRam0000000004f49d58 == '\0';
  }
  else {
    bVar12 = false;
  }
  fVar26 = *(float *)(param_4 + 0x98);
  iVar4 = 0;
  if ((float)(int)fVar27 != INFINITY) {
    iVar4 = (int)fVar27;
  }
  if (bVar12) {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f49d58 = '\x01';
  }
  fVar26 = param_3 / fVar26;
  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
    FUN_021f0574();
  }
  *param_5 = 0xffffffff;
  puVar11 = PTR_DAT_049c18d0;
  puVar10 = PTR_DAT_049bbdb0;
  iVar5 = 0;
  if ((float)(int)fVar26 != INFINITY) {
    iVar5 = (int)fVar26;
  }
  if (*(long *)(param_4 + 0x30) == 0) goto LAB_024e3ebc;
                    /* try { // try from 024e3bb0 to 025e3bc7 has its CatchHandler @ 024e3fd4 */
  iVar6 = *(int *)(*(long *)(param_4 + 0x30) + 0x84);
  if (iVar6 < 1) {
    uVar13 = 0xffffffff;
LAB_024e3e18:
    lVar16 = *(long *)(param_4 + 0x70);
    if ((lVar16 != 0) && (uVar19 = *(ulong *)(lVar16 + 0x18), 0 < (int)uVar19)) {
      uVar17 = 0;
      fVar26 = 3.4028235e+38;
      pfVar20 = (float *)(lVar16 + 0x28);
      do {
        fVar27 = (param_1 - pfVar20[-2]) * (param_1 - pfVar20[-2]) +
                 (param_2 - pfVar20[-1]) * (param_2 - pfVar20[-1]) +
                 (param_3 - *pfVar20) * (param_3 - *pfVar20);
        if (fVar27 < fVar26) {
          *param_5 = (uint)uVar17;
          uVar13 = uVar17 & 0xffffffff;
          fVar26 = fVar27;
        }
        uVar17 = uVar17 + 1;
        pfVar20 = pfVar20 + 3;
      } while ((uVar19 & 0xffffffff) != uVar17);
    }
    if ((int)uVar13 < 0) {
      if (cRam0000000004f4a68f == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a68f = '\x01';
      }
      return param_1 + *(float *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x24);
    }
  }
  else {
                    /* try { // try from 024e3bcc to 025e3bd7 has its CatchHandler @ 024e3fe0 */
    fVar26 = 3.4028235e+38;
    uVar22 = 1;
    do {
      iVar8 = -uVar22;
                    /* try { // try from 024e3bec to 025e3bf3 has its CatchHandler @ 024e3fd8 */
      iVar15 = iVar8;
      do {
        iVar18 = iVar8;
        iVar1 = -iVar15;
        if (-1 < iVar15) {
          iVar1 = iVar15;
        }
        do {
                    /* try { // try from 024e3c18 to 025e3c9b has its CatchHandler @ 024e3fe4 */
          iVar23 = iVar8;
          iVar2 = -iVar18;
          if (-1 < iVar18) {
            iVar2 = iVar18;
          }
          do {
            if (uVar22 < 2) {
LAB_024e3ce4:
              if (*(long *)(param_4 + 0x90) == 0) goto LAB_024e3ebc;
              uStack_88 = (ulong)(iVar15 + iVar3 & 0x1fffff) << 0x2a |
                          (ulong)(iVar18 + iVar4 & 0x1fffff) << 0x15 |
                          (ulong)(iVar23 + iVar5 & 0x1fffff);
              uVar13 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                                 (*(long *)(param_4 + 0x90),&uStack_88,&lStack_90,
                                  *(undefined8 *)puVar11);
              if ((uVar13 & 1) != 0) {
                if (lStack_90 == 0) goto LAB_024e3ebc;
                iVar21 = 0;
                while (iVar21 < *(int *)(lStack_90 + 0x18)) {
                  System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                            (lStack_90,iVar21,&uStack_88,*(undefined8 *)puVar10);
                  lVar16 = *(long *)(param_4 + 0x70);
                  if (lVar16 == 0) goto LAB_024e3ebc;
                  if (*(uint *)(lVar16 + 0x18) <= (uint)uStack_88) goto LAB_024e3ec0;
                  lVar16 = lVar16 + (long)(int)(uint)uStack_88 * 0xc;
                  fVar25 = param_3 - *(float *)(lVar16 + 0x28);
                  fVar27 = param_1 - *(float *)(lVar16 + 0x20);
                  fVar24 = param_2 - *(float *)(lVar16 + 0x24);
                  fVar27 = fVar27 * fVar27 + fVar24 * fVar24 + fVar25 * fVar25;
                  if (fVar27 < fVar26) {
                    *param_5 = (uint)uStack_88;
                    fVar26 = fVar27;
                  }
                  iVar21 = iVar21 + 1;
                  if (lStack_90 == 0) goto LAB_024e3ebc;
                }
              }
            }
            else {
              if (cRam0000000004f4b669 == '\0') {
                FUN_021f03f8(puVar9);
                cRam0000000004f4b669 = '\x01';
              }
              if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                FUN_021f0574();
              }
              if ((int)uVar22 <= iVar1) goto LAB_024e3ce4;
              if (cRam0000000004f4b669 == '\0') {
                FUN_021f03f8(puVar9);
                cRam0000000004f4b669 = '\x01';
              }
              if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                FUN_021f0574();
              }
              if ((int)uVar22 <= iVar2) goto LAB_024e3ce4;
                    /* try { // try from 024e3cb0 to 025e3cb7 has its CatchHandler @ 024e3fc8 */
              if (cRam0000000004f4b669 == '\0') {
                    /* try { // try from 024e3cb8 to 025e3f7b has its CatchHandler @ 024e3648 */
                FUN_021f03f8(puVar9);
                cRam0000000004f4b669 = '\x01';
              }
              if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                FUN_021f0574();
              }
              iVar21 = -iVar23;
              if (-1 < iVar23) {
                iVar21 = iVar23;
              }
              if ((int)uVar22 <= iVar21) goto LAB_024e3ce4;
            }
            iVar23 = iVar23 + 1;
          } while (iVar23 <= (int)uVar22);
          iVar18 = iVar18 + 1;
        } while (iVar18 <= (int)uVar22);
        iVar15 = iVar15 + 1;
      } while (iVar15 <= (int)uVar22);
      uVar7 = *param_5;
      uVar13 = (ulong)uVar7;
    } while (((int)uVar7 < 0) && (bVar12 = (int)uVar22 < iVar6, uVar22 = uVar22 + 1, bVar12));
    if ((int)uVar7 < 0) goto LAB_024e3e18;
  }
  lVar16 = *(long *)(param_4 + 0x78);
  if (lVar16 != 0) {
    if ((uint)uVar13 < *(uint *)(lVar16 + 0x18)) {
      return *(float *)(lVar16 + uVar13 * 0xc + 0x20);
    }
LAB_024e3ec0:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
LAB_024e3ebc:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

