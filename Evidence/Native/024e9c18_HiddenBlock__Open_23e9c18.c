/* IL2CPP: HiddenBlock$$Open
void HiddenBlock__Open (HiddenBlock_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HiddenBlock$$Open
   void HiddenBlock__Open (HiddenBlock_o* __this, const MethodInfo* method); */

void HiddenBlock__Open_23e9c18(long param_1)

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
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_38;
  
                    /* catch() { ... } // from try @ 024e9b8c with catch @ 024e9c18
                       catch() { ... } // from try @ 024e9bc4 with catch @ 024e9c18 */
  lVar6 = *(long *)(param_1 + 0xb0);
                    /* catch() { ... } // from try @ 024e9be4 with catch @ 024e9c1c */
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* catch() { ... } // from try @ 024e9a6c with catch @ 024e9c20
                       catch() { ... } // from try @ 024e9abc with catch @ 024e9c20 */
                    /* catch() { ... } // from try @ 024e9b18 with catch @ 024e9c24 */
  uVar10 = *(undefined8 *)(lVar6 + 0xe4);
  if ((bRam0000000004f4bd1b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c83b8,uVar10,0);
    FUN_021f03f8(PTR_DAT_049c83c0);
    FUN_021f03f8(PTR_DAT_049c83c8);
    FUN_021f03f8(PTR_DAT_049c83d0);
    FUN_021f03f8(PTR_DAT_049c83d8);
    FUN_021f03f8(PTR_DAT_049c83e0);
    bRam0000000004f4bd1b = 1;
  }
  lVar11 = *(long *)(lVar6 + 0x50);
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  if (lVar11 == 0) {
LAB_025f4f44:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(int *)(lVar11 + 0x18) == 0) {
    UnityEngine_Component__GetComponentsInChildren___Il2CppFullySharedGenericType__25c22a8
              (lVar6,lVar11,*(undefined8 *)PTR_DAT_049c83b8);
    lVar11 = *(long *)(lVar6 + 0x50);
    if (lVar11 == 0) goto LAB_025f4f44;
  }
  puVar5 = PTR_DAT_049c83d0;
  puVar4 = PTR_DAT_049c83c8;
  puVar3 = PTR_DAT_049c83c0;
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (lVar11,&uStack_78,*(undefined8 *)PTR_DAT_049c83d8);
  while (uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                           (&uStack_78,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
    lVar12 = *(long *)puVar5;
    lVar8 = *(long *)(lVar12 + 0x20);
    uVar2 = *(ushort *)(lVar8 + 0x135);
    lVar11 = lVar8;
    if ((uVar2 & 1) == 0) {
      lVar11 = FUN_02229718();
      lVar8 = *(long *)(lVar12 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_02229718();
    }
    uVar9 = thunk_FUN_0224e54c(&uStack_78,
                               *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&uStack_38,uVar9,uVar1);
    GameBehaviourBase__InjectColorType_24f4fa0(0,0,0,0,lVar6,uVar10,uStack_38);
  }
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
            (&uStack_78,*(undefined8 *)puVar3);
  return;
}

