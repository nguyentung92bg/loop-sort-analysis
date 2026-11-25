/* IL2CPP: BlockNextTransferSystem$$OnUpdate
void BlockNextTransferSystem__OnUpdate (BlockNextTransferSystem_o* __this, float deltaTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockNextTransferSystem$$OnUpdate
   void BlockNextTransferSystem__OnUpdate (BlockNextTransferSystem_o* __this, float deltaTime, const
   MethodInfo* method); */

void BlockNextTransferSystem__OnUpdate_23e1d2c(undefined4 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4b5de & 1) == 0) {
                    /* try { // try from 024e1d54 to 025e1d8f has its CatchHandler @ 024e22a4 */
    FUN_021f03f8(PTR_DAT_049c16f8);
    bRam0000000004f4b5de = 1;
  }
  uStack_28 = 0;
  SystemBase__OnUpdate_2555ef8(param_1,param_2,0);
  puVar1 = PTR_DAT_049c16f8;
  if (*(char *)(param_2 + 0x70) != '\0') {
    lVar2 = *(long *)(param_2 + 0x78);
    while( true ) {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024e1db4 to 025e1dff has its CatchHandler @ 024e1f88 */
        FUN_021f06a0();
      }
      uVar3 = System_Collections_Generic_Stack___Il2CppFullySharedGenericType___TryPop_29a2c0c
                        (lVar2,&uStack_28,*(undefined8 *)puVar1);
      if ((uVar3 & 1) == 0) break;
      BlockNextTransferSystem__UpdateNextTransferBlocks_23e1dcc(param_2,uStack_28);
      lVar2 = *(long *)(param_2 + 0x78);
    }
  }
  return;
}

