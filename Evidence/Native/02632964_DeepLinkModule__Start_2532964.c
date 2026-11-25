/* IL2CPP: DeepLinkModule$$Start
void DeepLinkModule__Start (DeepLinkModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DeepLinkModule$$Start
   void DeepLinkModule__Start (DeepLinkModule_o* __this, const MethodInfo* method); */

void DeepLinkModule__Start_2532964(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  long *plVar13;
  uint uVar14;
  long lStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  uint uStack_74;
  ulong uStack_70;
  undefined8 uStack_68;
  
  puVar4 = PTR_DAT_049c9fc8;
  puVar3 = PTR_DAT_049b3bf8;
  puVar2 = PTR_DAT_049b3bd8;
  if ((bRam0000000004f4bf2e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bd8);
    FUN_021f03f8(PTR_DAT_049b3bf8);
    FUN_021f03f8(PTR_DAT_049c9fc8);
    bRam0000000004f4bf2e = 1;
  }
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar5,param_1,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  UnityEngine_Application__add_deepLinkActivated_3bc8b44(uVar5,0);
  lVar6 = UnityEngine_Application__get_absoluteURL_3bc75e4(0);
  uVar7 = System_String__IsNullOrEmpty_2f7c924(lVar6,0);
  puVar4 = PTR_DAT_049c9fd8;
  puVar3 = PTR_DAT_049c9fd0;
  puVar2 = PTR_DAT_049c8328;
  if ((uVar7 & 1) != 0) {
    return;
  }
  if ((bRam0000000004f4bf2f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4358);
    FUN_021f03f8(PTR_DAT_049b4338);
    FUN_021f03f8(PTR_DAT_049b4340);
    FUN_021f03f8(PTR_DAT_049c9fe0);
    FUN_021f03f8(PTR_DAT_049c9fe8);
    FUN_021f03f8(PTR_DAT_049c9ff0);
    FUN_021f03f8(PTR_DAT_049c9fd8);
    FUN_021f03f8(PTR_DAT_049c9fd0);
    FUN_021f03f8(PTR_DAT_049c9ff8);
    FUN_021f03f8(PTR_DAT_049c8328);
    FUN_021f03f8(PTR_DAT_049ca000);
    bRam0000000004f4bf2f = 1;
  }
  uStack_74 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  lStack_98 = 0;
  lVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar8,*(undefined8 *)puVar4);
  if ((((*(long *)puVar2 != 0) && (lVar6 != 0)) &&
      (lVar6 = System_String__Remove_2f7f334(lVar6,0,*(undefined4 *)(*(long *)puVar2 + 0x10),0),
      lVar6 != 0)) &&
     (lVar9 = System_String__Split_2f802dc(lVar6,0x26,0,0), puVar4 = PTR_DAT_049c9ff0,
     puVar3 = PTR_DAT_049c9fe0, puVar2 = PTR_DAT_049b3bd0, lVar9 != 0)) {
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (0 < (int)uVar1) {
      uVar14 = 0;
      do {
        if (uVar1 <= uVar14) {
LAB_02632d70:
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        lVar10 = *(long *)(lVar9 + (long)(int)uVar14 * 8 + 0x20);
        if ((lVar10 == 0) || (lVar10 = System_String__Split_2f802dc(lVar10,0x2f,0,0), lVar10 == 0))
        goto LAB_02632d6c;
        if (*(int *)(lVar10 + 0x18) == 0) goto LAB_02632d70;
        uVar5 = *(undefined8 *)(lVar10 + 0x20);
        if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar7 = System_Enum__TryParse___Il2CppFullySharedGenericStructType__25d8374
                          (uVar5,1,&uStack_74,*(undefined8 *)puVar3);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(lVar10 + 0x18) < 2) {
            puVar11 = *(undefined8 **)(*(long *)(puVar2 + 0x90) + 0xb8);
          }
          else {
            puVar11 = (undefined8 *)(lVar10 + 0x28);
          }
          uStack_88 = *puVar11;
          uStack_90 = (ulong)uStack_74;
          thunk_FUN_021f190c((ulong)&uStack_90 | 8);
          if (lVar8 == 0) goto LAB_02632d6c;
          uStack_68 = uStack_88;
          uStack_70 = uStack_90;
          FUN_02333498(lVar8,&uStack_70,*(undefined8 *)puVar4);
        }
        uVar1 = *(uint *)(lVar9 + 0x18);
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < (int)uVar1);
    }
    puVar2 = PTR_DAT_049b4338;
    lVar9 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4340);
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
              (lVar9,*(undefined8 *)puVar2);
    if (lVar9 != 0) {
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                (lVar9,*(undefined8 *)PTR_DAT_049c9ff8,lVar6,*(undefined8 *)PTR_DAT_049b4358);
      if (*(long *)(param_1 + 0x18) != 0) {
        AnalyticsModule__CustomEvent_253ef80
                  (*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_049ca000,lVar9,0);
        plVar13 = *(long **)(param_1 + 0x10);
        lStack_98 = lVar8;
        thunk_FUN_021f190c(&lStack_98,lVar8);
        lVar6 = lStack_98;
        if (plVar13 != (long *)0x0) {
          lVar8 = *plVar13;
          uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar7 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049c9fe8) {
                puVar11 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_02632d3c;
              }
              uVar7 = uVar7 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 != 0);
          }
          puVar11 = (undefined8 *)FUN_02229a4c(plVar13,*(long *)PTR_DAT_049c9fe8,0);
LAB_02632d3c:
          (*(code *)*puVar11)(plVar13,lVar6,puVar11[1]);
          return;
        }
      }
    }
  }
LAB_02632d6c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

