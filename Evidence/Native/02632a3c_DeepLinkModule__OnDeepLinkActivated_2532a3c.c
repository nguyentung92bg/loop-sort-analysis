/* IL2CPP: DeepLinkModule$$OnDeepLinkActivated
void DeepLinkModule__OnDeepLinkActivated (DeepLinkModule_o* __this, System_String_o* absoluteURL, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DeepLinkModule$$OnDeepLinkActivated
   void DeepLinkModule__OnDeepLinkActivated (DeepLinkModule_o* __this, System_String_o* absoluteURL,
   const MethodInfo* method); */

void DeepLinkModule__OnDeepLinkActivated_2532a3c(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int *piVar11;
  long *plVar12;
  undefined8 uVar13;
  uint uVar14;
  long lStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  uint uStack_74;
  ulong uStack_70;
  undefined8 uStack_68;
  
  puVar4 = PTR_DAT_049c9fd8;
  puVar3 = PTR_DAT_049c9fd0;
  puVar2 = PTR_DAT_049c8328;
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
  lVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar5,*(undefined8 *)puVar4);
  if ((((*(long *)puVar2 != 0) && (param_2 != 0)) &&
      (lVar6 = System_String__Remove_2f7f334(param_2,0,*(undefined4 *)(*(long *)puVar2 + 0x10),0),
      lVar6 != 0)) &&
     (lVar7 = System_String__Split_2f802dc(lVar6,0x26,0,0), puVar4 = PTR_DAT_049c9ff0,
     puVar3 = PTR_DAT_049c9fe0, puVar2 = PTR_DAT_049b3bd0, lVar7 != 0)) {
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar1) {
      uVar14 = 0;
      do {
        if (uVar1 <= uVar14) {
LAB_02632d70:
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        lVar8 = *(long *)(lVar7 + (long)(int)uVar14 * 8 + 0x20);
        if ((lVar8 == 0) || (lVar8 = System_String__Split_2f802dc(lVar8,0x2f,0,0), lVar8 == 0))
        goto LAB_02632d6c;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_02632d70;
        uVar13 = *(undefined8 *)(lVar8 + 0x20);
        if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar9 = System_Enum__TryParse___Il2CppFullySharedGenericStructType__25d8374
                          (uVar13,1,&uStack_74,*(undefined8 *)puVar3);
        if ((uVar9 & 1) != 0) {
          if (*(int *)(lVar8 + 0x18) < 2) {
            puVar10 = *(undefined8 **)(*(long *)(puVar2 + 0x90) + 0xb8);
          }
          else {
            puVar10 = (undefined8 *)(lVar8 + 0x28);
          }
          uStack_88 = *puVar10;
          uStack_90 = (ulong)uStack_74;
          thunk_FUN_021f190c((ulong)&uStack_90 | 8);
          if (lVar5 == 0) goto LAB_02632d6c;
          uStack_68 = uStack_88;
          uStack_70 = uStack_90;
          FUN_02333498(lVar5,&uStack_70,*(undefined8 *)puVar4);
        }
        uVar1 = *(uint *)(lVar7 + 0x18);
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < (int)uVar1);
    }
    puVar2 = PTR_DAT_049b4338;
    lVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4340);
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
              (lVar7,*(undefined8 *)puVar2);
    if (lVar7 != 0) {
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                (lVar7,*(undefined8 *)PTR_DAT_049c9ff8,lVar6,*(undefined8 *)PTR_DAT_049b4358);
      if (*(long *)(param_1 + 0x18) != 0) {
        AnalyticsModule__CustomEvent_253ef80
                  (*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_049ca000,lVar7,0);
        plVar12 = *(long **)(param_1 + 0x10);
        lStack_98 = lVar5;
        thunk_FUN_021f190c(&lStack_98,lVar5);
        lVar5 = lStack_98;
        if (plVar12 != (long *)0x0) {
          lVar6 = *plVar12;
          uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar9 != 0) {
            piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049c9fe8) {
                puVar10 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_02632d3c;
              }
              uVar9 = uVar9 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)PTR_DAT_049c9fe8,0);
LAB_02632d3c:
          (*(code *)*puVar10)(plVar12,lVar5,puVar10[1]);
          return;
        }
      }
    }
  }
LAB_02632d6c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

