/* IL2CPP: Areas$$.ctor
void Areas___ctor (Areas_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Areas$$.ctor
   void Areas___ctor (Areas_o* __this, const MethodInfo* method); */

void Areas___ctor_256fccc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR_DAT_049cc0d8;
  puVar3 = PTR_DAT_049cc0d0;
  puVar2 = PTR_DAT_049cc0c8;
  puVar1 = PTR_DAT_049cc0c0;
                    /* try { // try from 0266fcd4 to 0276fd5b has its CatchHandler @ 0266fee0 */
  if ((bRam0000000004f4c1c3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cc0c8);
    FUN_021f03f8(PTR_DAT_049cc0d8);
    FUN_021f03f8(PTR_DAT_049cc0c0);
    FUN_021f03f8(PTR_DAT_049cc0d0);
    bRam0000000004f4c1c3 = 1;
  }
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x28),uVar5);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar5,*(undefined8 *)puVar4);
                    /* try { // try from 0266fd7c to 0276fd87 has its CatchHandler @ 0266fe88 */
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x30),uVar5);
  puVar1 = PTR_DAT_049b3b98;
                    /* try { // try from 0266fd94 to 0276fda3 has its CatchHandler @ 0266fe84 */
  if ((bRam0000000004f58430 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f58430 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  System_Object___ctor_3142338(param_1,0);
  if (pcRam0000000004f58438 == (code *)0x0) {
    pcRam0000000004f58438 = (code *)FUN_021f03bc(&UNK_013c1465);
  }
                    /* WARNING: Could not recover jumptable at 0x03d209d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000004f58438)(param_1);
  return;
}

