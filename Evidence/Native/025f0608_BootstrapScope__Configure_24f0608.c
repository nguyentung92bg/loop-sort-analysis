/* IL2CPP: BootstrapScope$$Configure
void BootstrapScope__Configure (BootstrapScope_o* __this, VContainer_IContainerBuilder_o* builder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BootstrapScope$$Configure
   void BootstrapScope__Configure (BootstrapScope_o* __this, VContainer_IContainerBuilder_o*
   builder, const MethodInfo* method); */

void BootstrapScope__Configure_24f0608(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_38;
  
  if ((bRam0000000004f4bcf3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8120);
    FUN_021f03f8(PTR_DAT_049c8128);
    FUN_021f03f8(PTR_DAT_049c8130);
    FUN_021f03f8(PTR_DAT_049c8138);
                    /* try { // try from 025f0664 to 026f066b has its CatchHandler @ 025f0cc4 */
    bRam0000000004f4bcf3 = 1;
  }
                    /* try { // try from 025f066c to 026f0687 has its CatchHandler @ 025f0bec */
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  VContainer_Unity_LifetimeScope__Configure_3f2c494(param_1,param_2,0);
  puVar5 = PTR_DAT_049c8130;
  puVar4 = PTR_DAT_049c8128;
  puVar3 = PTR_DAT_049c8120;
  if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 025f06a0 to 026f06c3 has its CatchHandler @ 025f0cc0 */
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_1 + 0x68),&uStack_88,*(undefined8 *)PTR_DAT_049c8138);
  uStack_50 = uStack_78;
  uStack_58 = puStack_80;
  uStack_60 = uStack_88;
  uStack_88 = 0;
  puStack_80 = &uStack_60;
  while( true ) {
                    /* try { // try from 025f06d0 to 026f06db has its CatchHandler @ 025f0be8 */
    uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_60,*(undefined8 *)puVar4);
    if ((uVar6 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_60,*(undefined8 *)puVar3);
                    /* try { // try from 025f0788 to 026f078f has its CatchHandler @ 025f0bac */
      return;
    }
    lVar10 = *(long *)puVar5;
    lVar7 = *(long *)(lVar10 + 0x20);
                    /* try { // try from 025f06ec to 026f06f7 has its CatchHandler @ 025f0be0 */
    uVar2 = *(ushort *)(lVar7 + 0x135);
    lVar8 = lVar7;
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_02229718();
      lVar7 = *(long *)(lVar10 + 0x20);
      uVar2 = *(ushort *)(lVar7 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar7 = FUN_02229718();
    }
                    /* try { // try from 025f072c to 026f0737 has its CatchHandler @ 025f0bd8 */
    uVar9 = thunk_FUN_0224e54c(&uStack_60,
                               *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&plStack_38,uVar9,uVar1);
    if (plStack_38 == (long *)0x0) break;
                    /* try { // try from 025f0754 to 026f0757 has its CatchHandler @ 025f0bd0 */
                    /* try { // try from 025f0764 to 026f076f has its CatchHandler @ 025f0bc8 */
    (**(code **)(*plStack_38 + 0x198))(plStack_38,param_2,*(undefined8 *)(*plStack_38 + 0x1a0));
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

