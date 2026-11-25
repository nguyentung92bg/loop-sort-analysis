/* IL2CPP: GameReviveState$$Init
void GameReviveState__Init (GameReviveState_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameReviveState$$Init
   void GameReviveState__Init (GameReviveState_o* __this, const MethodInfo* method); */

void GameReviveState__Init_2501dc4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_DAT_049c8ae0;
                    /* try { // try from 02601dd8 to 02701ddf has its CatchHandler @ 0260242c */
  if ((bRam0000000004f4bd6b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8c40);
    FUN_021f03f8(PTR_DAT_049c1940);
    FUN_021f03f8(PTR_DAT_049c8ae0);
    bRam0000000004f4bd6b = 1;
  }
  UnityHFSM_StateBase___Il2CppFullySharedGenericType___Init_29a6630(param_1,*(undefined8 *)puVar1);
                    /* try { // try from 02601e20 to 02701e4b has its CatchHandler @ 0260245c */
  if (*(long *)(param_1 + 0xa8) != 0) {
    uVar2 = RemoteConfigModule__GetDataClassNew_object__26a494c
                      (*(long *)(param_1 + 0xa8),*(undefined8 *)PTR_DAT_049c8c40);
    *(undefined8 *)(param_1 + 0xb8) = uVar2;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0xb8),uVar2);
    if (*(long *)(param_1 + 0xa8) != 0) {
                    /* try { // try from 02601e58 to 02701e5b has its CatchHandler @ 02602454 */
      uVar2 = RemoteConfigModule__GetDataClassNew_object__26a494c
                        (*(long *)(param_1 + 0xa8),*(undefined8 *)PTR_DAT_049c1940);
      puVar3 = (undefined8 *)(param_1 + 0xc0);
      *puVar3 = uVar2;
                    /* try { // try from 02601e68 to 02701e7f has its CatchHandler @ 02602460 */
      if (iRam0000000005174518 != 0) {
        FUN_023118d0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                     ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

