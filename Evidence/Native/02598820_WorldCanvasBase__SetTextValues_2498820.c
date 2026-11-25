/* IL2CPP: WorldCanvasBase$$SetTextValues
void WorldCanvasBase__SetTextValues (WorldCanvasBase_o* __this, int32_t role, System_String_array* values, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WorldCanvasBase$$SetTextValues
   void WorldCanvasBase__SetTextValues (WorldCanvasBase_o* __this, int32_t role,
   System_String_array* values, const MethodInfo* method); */

void WorldCanvasBase__SetTextValues_2498820(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_48;
  
  lVar7 = *(long *)(param_1 + 0xa0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f5108d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049fa908,param_2,param_3,0);
    FUN_021f03f8(PTR_DAT_049fa910);
    FUN_021f03f8(PTR_DAT_049fa918);
    FUN_021f03f8(PTR_DAT_049fa920);
    FUN_021f03f8(PTR_DAT_049cbed0);
    bRam0000000004f5108d = 1;
  }
  puVar6 = PTR_DAT_049fa918;
  puVar5 = PTR_DAT_049fa910;
  puVar4 = PTR_DAT_049fa908;
  puVar3 = PTR_DAT_049cbed0;
  lVar7 = *(long *)(lVar7 + 0x38);
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (lVar7,&uStack_88,*(undefined8 *)PTR_DAT_049fa920);
  uStack_60 = uStack_78;
  uStack_68 = puStack_80;
  uStack_70 = uStack_88;
  uStack_88 = 0;
  puStack_80 = &uStack_70;
  while( true ) {
    uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_70,*(undefined8 *)puVar5);
    if ((uVar8 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_70,*(undefined8 *)puVar4);
      return;
    }
    lVar11 = *(long *)puVar6;
    lVar9 = *(long *)(lVar11 + 0x20);
    uVar2 = *(ushort *)(lVar9 + 0x135);
    lVar7 = lVar9;
    if ((uVar2 & 1) == 0) {
      lVar7 = FUN_02229718();
      lVar9 = *(long *)(lVar11 + 0x20);
      uVar2 = *(ushort *)(lVar9 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar9 = FUN_02229718();
    }
    uVar10 = thunk_FUN_0224e54c(&uStack_70,
                                *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_48,uVar10,uVar1);
    lVar7 = lStack_48;
    if (lStack_48 == 0) break;
    if (*(int *)(lStack_48 + 0x18) == (int)param_2) {
      lVar9 = *(long *)(lStack_48 + 0x20);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if ((lVar9 != 0) && (uVar8 = System_String__IsNullOrEmpty_2f7c924(lVar9,0), (uVar8 & 1) == 0))
      {
        uVar10 = StatefulUI_Runtime_References_TextReference__get_Value_3345f68(lVar7);
        uVar10 = System_String__Format_2f7e034(uVar10,param_3,0);
        StatefulUI_Runtime_References_TextReference__SetText_334627c(lVar7,uVar10);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

