/* IL2CPP: BoosterContainer$$Render
void BoosterContainer__Render (BoosterContainer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BoosterContainer$$Render
   void BoosterContainer__Render (BoosterContainer_o* __this, const MethodInfo* method); */

void BoosterContainer__Render_256a430(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_44 [4];
  
  if ((bRam0000000004f4c18b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbe28);
    FUN_021f03f8(PTR_DAT_049b60f8);
    FUN_021f03f8(PTR_DAT_049b6100);
    FUN_021f03f8(PTR_DAT_049b6108);
    FUN_021f03f8(PTR_DAT_049b6118);
    FUN_021f03f8(PTR_DAT_049b6120);
    bRam0000000004f4c18b = 1;
  }
  lVar8 = *(long *)(param_1 + 0x30);
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  uStack_68 = 0;
  if (lVar8 != 0) {
    if (*(char *)(lVar8 + 0x20) == '\0') {
      if (*(long *)(lVar8 + 0x40) == 0) goto LAB_0266a5cc;
      auStack_60 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                             (*(long *)(lVar8 + 0x40),*(undefined8 *)PTR_DAT_049b6120);
      puVar5 = PTR_DAT_049cbe28;
      puVar4 = PTR_DAT_049b6118;
      puVar3 = PTR_DAT_049b6108;
      puVar2 = PTR_DAT_049b6100;
      while (uVar6 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                               (auStack_60,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
        lVar8 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                          (auStack_60,*(undefined8 *)puVar3);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar10 = *(long *)(param_1 + 0x90);
        plVar9 = *(long **)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0);
        uVar1 = *(undefined4 *)(plVar9[1] + 0xfc);
        uVar7 = thunk_FUN_0224e54c(lVar8,*(undefined8 *)(*plVar9 + 0x80));
        func_0x04608620(auStack_44,uVar7,uVar1);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar6 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                          (lVar10,auStack_44,&uStack_68,*(undefined8 *)puVar5);
        if ((uVar6 & 1) != 0) {
          BoosterContainer__OnUpdateElement_256a644(param_1,uStack_68,lVar8);
        }
      }
      Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                (auStack_60,*(undefined8 *)PTR_DAT_049b60f8);
    }
    return;
  }
LAB_0266a5cc:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

