/* IL2CPP: AreasMonitor$$RenderElements
void AreasMonitor__RenderElements (AreasMonitor_o* __this, bool animate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasMonitor$$RenderElements
   void AreasMonitor__RenderElements (AreasMonitor_o* __this, bool animate, const MethodInfo*
   method); */

void AreasMonitor__RenderElements_2434c48(long param_1,uint param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_38;
  
  if ((bRam0000000004f4b7fd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3a90);
    FUN_021f03f8(PTR_DAT_049c3a98);
    FUN_021f03f8(PTR_DAT_049c3aa0);
    FUN_021f03f8(PTR_DAT_049c3aa8);
    FUN_021f03f8(PTR_DAT_049c3ab0);
    bRam0000000004f4b7fd = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  if ((*(long *)(param_1 + 0xc0) != 0) &&
     (lVar6 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Keys_282b148
                        (*(long *)(param_1 + 0xc0),*(undefined8 *)PTR_DAT_049c3a90),
     puVar5 = PTR_DAT_049c3aa8, puVar4 = PTR_DAT_049c3aa0, puVar3 = PTR_DAT_049c3a98, lVar6 != 0)) {
    System_Collections_Generic_Dictionary_KeyCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_28bbde4
              (lVar6,&uStack_78,*(undefined8 *)PTR_DAT_049c3ab0);
    uStack_50 = uStack_68;
    uStack_58 = puStack_70;
    uStack_60 = uStack_78;
    uStack_78 = 0;
    puStack_70 = &uStack_60;
    while( true ) {
      uVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_28511fc
                        (&uStack_60,*(undefined8 *)puVar4);
      if ((uVar7 & 1) == 0) {
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_28511f8
                  (&uStack_60,*(undefined8 *)puVar3);
        return;
      }
      lVar10 = *(long *)puVar5;
      lVar8 = *(long *)(lVar10 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
      lVar6 = lVar8;
      if ((uVar2 & 1) == 0) {
        lVar6 = FUN_02229718();
        lVar8 = *(long *)(lVar10 + 0x20);
        uVar2 = *(ushort *)(lVar8 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_02229718();
      }
      uVar9 = thunk_FUN_0224e54c(&uStack_60,
                                 *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&lStack_38,uVar9,uVar1);
      lVar6 = lStack_38;
      if (lStack_38 == 0) break;
      lVar8 = UnityEngine_Component__get_gameObject_3c187f4(lStack_38,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar7 = UnityEngine_GameObject__get_activeInHierarchy_3c1cfac(lVar8,0);
      if ((uVar7 & 1) != 0) {
        AreasMonitor__RenderElement_243650c(param_1,lVar6,param_2 & 1);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

