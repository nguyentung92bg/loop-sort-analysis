/* IL2CPP: Extensions$$HasPlayingMotions
bool Extensions__HasPlayingMotions (LitMotion_CompositeMotionHandle_o* motions, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$HasPlayingMotions
   bool Extensions__HasPlayingMotions (LitMotion_CompositeMotionHandle_o* motions, const MethodInfo*
   method); */

uint Extensions__HasPlayingMotions_24e6bcc(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e6b74 with catch @ 025e6bcc
                       try { // try from 025e6bcc to 026e6bfb has its CatchHandler @ 025e6970 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e6bc8 with catch @ 025e6bd0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e6bc4 with catch @ 025e6bd4
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e6b88 with catch @ 025e6bd8
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e6ae8 with catch @ 025e6bdc
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e6b08 with catch @ 025e6be0
                        */
  if ((bRam0000000004f4bc91 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7c50);
                    /* try { // try from 025e6bfc to 026e6bff has its CatchHandler @ 025e6c20 */
                    /* try { // try from 025e6c00 to 026e6c23 has its CatchHandler @ 025e6970 */
    FUN_021f03f8(PTR_DAT_049c7c58);
    FUN_021f03f8(PTR_DAT_049c7c60);
    bRam0000000004f4bc91 = 1;
  }
  puVar5 = PTR_DAT_049c7c60;
  puVar4 = PTR_DAT_049c7c58;
  puVar3 = PTR_DAT_049c7c50;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
                    /* catch() { ... } // from try @ 025e6bfc with catch @ 025e6c20 */
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 025e6c24 to 026e6c2b has its CatchHandler @ 025e6c34 */
                    /* try { // try from 025e6c2c to 026e6c37 has its CatchHandler @ 025e6970 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025e6c24 with catch @ 025e6c34
                        */
                    /* try { // try from 025e6c38 to 026e6d8f has its CatchHandler @ 025e6c38
                       catch() { ... } // from try @ 025e6c38 with catch @ 025e6c38
                       catch() { ... } // from try @ 025e6dfc with catch @ 025e6c38
                       catch() { ... } // from try @ 025e6e38 with catch @ 025e6c38
                       catch() { ... } // from try @ 025e6e74 with catch @ 025e6c38
                       catch() { ... } // from try @ 025e6ea8 with catch @ 025e6c38
                       catch() { ... } // from try @ 025e6ed4 with catch @ 025e6c38 */
  LitMotion_CompositeMotionHandle__GetEnumerator_2e8b1c8(&uStack_60,param_1,0);
  do {
    uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_60,*(undefined8 *)puVar4);
    if ((uVar6 & 1) == 0) break;
    lVar11 = *(long *)puVar5;
    lVar7 = *(long *)(lVar11 + 0x20);
    uVar2 = *(ushort *)(lVar7 + 0x135);
    lVar8 = lVar7;
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_02229718();
      lVar7 = *(long *)(lVar11 + 0x20);
      uVar2 = *(ushort *)(lVar7 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar7 = FUN_02229718();
    }
    uVar9 = thunk_FUN_0224e54c(&uStack_60,
                               *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&uStack_40,uVar9,uVar1);
    uVar10 = FUN_025691dc(uStack_40,uStack_38,0);
  } while ((uVar10 & 1) == 0);
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
            (&uStack_60,*(undefined8 *)puVar3);
  return uVar6 & 1;
}

