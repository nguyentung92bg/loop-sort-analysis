/* IL2CPP: RocketSystem$$ReleaseGroups
void RocketSystem__ReleaseGroups (System_Collections_Generic_List_List_Block___o* groups, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RocketSystem$$ReleaseGroups
   void RocketSystem__ReleaseGroups (System_Collections_Generic_List_List_Block___o* groups, const
   MethodInfo* method); */

void RocketSystem__ReleaseGroups_24b8d60(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
                    /* try { // try from 025b8d84 to 026b8d93 has its CatchHandler @ 025b8e20 */
  if ((bRam0000000004f4bbaf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2590);
                    /* try { // try from 025b8d98 to 026b8dbf has its CatchHandler @ 025b8e28 */
    FUN_021f03f8(PTR_DAT_049c14d0);
    FUN_021f03f8(PTR_DAT_049c25a0);
    FUN_021f03f8(PTR_DAT_049c25a8);
    FUN_021f03f8(PTR_DAT_049c25b0);
    FUN_021f03f8(PTR_DAT_049c6db8);
                    /* try { // try from 025b8dd4 to 026b8de3 has its CatchHandler @ 025b8e2c */
    FUN_021f03f8(PTR_DAT_049c25d0);
    bRam0000000004f4bbaf = 1;
  }
  puVar9 = PTR_DAT_049c6db8;
  puVar8 = PTR_DAT_049c25b0;
  puVar7 = PTR_DAT_049c25a8;
  puVar6 = PTR_DAT_049c25a0;
  puVar5 = PTR_DAT_049c2590;
  puVar4 = PTR_DAT_049c14d0;
                    /* try { // try from 025b8de4 to 026b8e47 has its CatchHandler @ 025b8cc0 */
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b8d84 with catch @ 025b8e20
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b8d4c with catch @ 025b8e24
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b8d98 with catch @ 025b8e28
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b8dd4 with catch @ 025b8e2c
                        */
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (param_1,&uStack_68,*(undefined8 *)PTR_DAT_049c25d0);
                    /* try { // try from 025b8e48 to 026b8e4b has its CatchHandler @ 025b8e54 */
  while (uVar10 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                            (&uStack_68,*(undefined8 *)puVar7), (uVar10 & 1) != 0) {
    lVar14 = *(long *)puVar8;
                    /* catch() { ... } // from try @ 025b8e48 with catch @ 025b8e54 */
    lVar11 = *(long *)(lVar14 + 0x20);
                    /* try { // try from 025b8e58 to 026b8e5f has its CatchHandler @ 025b8e68 */
    uVar3 = *(ushort *)(lVar11 + 0x135);
                    /* try { // try from 025b8e60 to 026b8e6b has its CatchHandler @ 025b8cc0 */
    lVar12 = lVar11;
    if ((uVar3 & 1) == 0) {
      lVar12 = FUN_02229718();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025b8e58 with catch @ 025b8e68
                        */
      lVar11 = *(long *)(lVar14 + 0x20);
      uVar3 = *(ushort *)(lVar11 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
    if ((uVar3 & 1) == 0) {
      lVar11 = FUN_02229718();
    }
    uVar13 = thunk_FUN_0224e54c(&uStack_68,
                                *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&uStack_48,uVar13,uVar1);
    uVar13 = uStack_48;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Release_28045e4
              (uVar13,*(undefined8 *)puVar5);
  }
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
            (&uStack_68,*(undefined8 *)puVar6);
  lVar12 = *(long *)(*(long *)puVar9 + 0x20);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  uVar10 = FUN_021f1190(*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 200));
  if ((uVar10 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (0 < iVar2) {
      System_Array__Clear_31229cc(*(undefined8 *)(param_1 + 0x10),0,iVar2,0);
    }
  }
  return;
}

