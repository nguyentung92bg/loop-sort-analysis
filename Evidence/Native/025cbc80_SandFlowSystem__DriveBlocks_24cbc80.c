/* IL2CPP: SandFlowSystem$$DriveBlocks
void SandFlowSystem__DriveBlocks (SandFlowSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowSystem$$DriveBlocks
   void SandFlowSystem__DriveBlocks (SandFlowSystem_o* __this, const MethodInfo* method); */

void SandFlowSystem__DriveBlocks_24cbc80(long param_1)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 uStack_70;
  float fStack_64;
  
  if ((bRam0000000004f4bbe4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7200);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1558);
    FUN_021f03f8(PTR_DAT_049be8a8);
    bRam0000000004f4bbe4 = 1;
  }
  puVar2 = PTR_DAT_049c7200;
  fVar1 = _UNK_013aa810;
  if (0 < *(int *)(param_1 + 0x188)) {
    uVar9 = 0;
    lVar10 = 0x4c;
    do {
      lVar6 = *(long *)(param_1 + 0xb8);
      if (lVar6 == 0) goto LAB_025cbec8;
      if (*(uint *)(lVar6 + 0x18) <= uVar9) {
LAB_025cbef8:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      lVar7 = *(long *)(param_1 + 0xb0);
      if (lVar7 == 0) goto LAB_025cbec8;
      if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_025cbef8;
      lVar6 = *(long *)(lVar6 + uVar9 * 8 + 0x20);
      if (0.5 < ABS(*(float *)(lVar7 + lVar10) + -1.0)) {
LAB_025cbd6c:
        if (*(long *)(param_1 + 0x250) == 0) goto LAB_025cbec8;
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
                  (*(long *)(param_1 + 0x250),lVar6,*(undefined8 *)puVar2);
      }
      else {
        if (lVar6 == 0) goto LAB_025cbec8;
        if (*(char *)(lVar6 + 0x158) != '\0') goto LAB_025cbd6c;
        if ((*(long *)(param_1 + 0x40) == 0) || (*(long *)(param_1 + 0x160) == 0))
        goto LAB_025cbec8;
        fVar11 = *(float *)(*(long *)(param_1 + 0x40) + 0x144);
        fVar12 = 1.0;
        if (1.0 <= fVar11) {
          fVar12 = fVar11;
        }
        fVar14 = *(float *)(*(long *)(param_1 + 0x160) + 0xa0);
        fVar11 = fVar1;
        if (fVar1 <= fVar14) {
          fVar11 = fVar14;
        }
        Block__SetMotionDurationMultiplier_23dc644
                  ((*(float *)(param_1 + 0x1ac) / fVar12) * fVar11,lVar6,0);
        if (*(long *)(lVar6 + 0x148) == 0) goto LAB_025cbec8;
        uVar5 = UnityEngine_Collider__get_enabled_3c8550c(*(long *)(lVar6 + 0x148),0);
        if ((uVar5 & 1) != 0) {
          if (*(long *)(lVar6 + 0x148) == 0) goto LAB_025cbec8;
          UnityEngine_Collider__set_enabled_3c855c0(*(long *)(lVar6 + 0x148),0,0);
          if (*(long *)(lVar6 + 0x140) == 0) goto LAB_025cbec8;
          UnityEngine_Rigidbody__set_detectCollisions_3c8a944(*(long *)(lVar6 + 0x140),0,0);
        }
        uVar13 = SandFlowSystem__GetCenter_24cd06c(param_1,(float *)(lVar7 + lVar10) + -0xb);
        uVar5 = SandFlowSystem__Sweep_24cd0dc(param_1,lVar6);
        if ((uVar5 & 1) == 0) {
          SandFlowSystem__Drive_24cd748(uVar13,param_1,lVar6);
        }
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x90;
    } while ((long)uVar9 < (long)*(int *)(param_1 + 0x188));
  }
  puVar3 = PTR_DAT_049c1558;
  puVar2 = PTR_DAT_049be8a8;
  lVar10 = *(long *)(param_1 + 0xd8);
  if (lVar10 != 0) {
    iVar8 = 0;
    do {
      if (*(int *)(lVar10 + 0x18) <= iVar8) {
        SandFlowSystem__OfferIntake_24cd890(param_1);
        return;
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar10,iVar8,&uStack_70,*(undefined8 *)puVar3);
      uVar4 = uStack_70;
      if (*(long *)(param_1 + 0xe8) == 0) break;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (*(long *)(param_1 + 0xe8),iVar8,&fStack_64,*(undefined8 *)puVar2);
      if (*(long *)(param_1 + 0x168) == 0) break;
      SandFlowSystem__Drive_24cd748
                (fStack_64 + *(float *)(*(long *)(param_1 + 0x168) + 800),param_1,uVar4);
      lVar10 = *(long *)(param_1 + 0xd8);
      iVar8 = iVar8 + 1;
    } while (lVar10 != 0);
  }
LAB_025cbec8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

