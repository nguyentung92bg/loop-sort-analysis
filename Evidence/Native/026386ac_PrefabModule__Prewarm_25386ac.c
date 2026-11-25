/* IL2CPP: PrefabModule$$Prewarm
void PrefabModule__Prewarm (PrefabModule_o* __this, UnityEngine_GameObject_o* original, int32_t maxCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PrefabModule$$Prewarm
   void PrefabModule__Prewarm (PrefabModule_o* __this, UnityEngine_GameObject_o* original, int32_t
   maxCount, const MethodInfo* method); */

void PrefabModule__Prewarm_25386ac(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bf69 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3bd8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049ca240);
    FUN_021f03f8(PTR_DAT_049ca300);
    bRam0000000004f4bf69 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = UnityEngine_Object__op_Equality_3c1eeb4(param_2,0,0);
  if ((uVar4 & 1) != 0) {
    thunk_FUN_02256840(PTR_DAT_049baa58);
                    /* try { // try from 026387f8 to 027387fb has its CatchHandler @ 026393c4 */
    uVar6 = thunk_FUN_0222ca34();
    uVar8 = thunk_FUN_02256840(PTR_DAT_049ca260);
    System_ArgumentNullException___ctor_30655c4(uVar6,uVar8,0);
    uVar8 = thunk_FUN_02256840(PTR_DAT_049ca308);
                    /* WARNING: Subroutine does not return */
    FUN_021f0564(uVar6,uVar8);
  }
  lVar5 = PrefabModule__GetOrCreatePool_25375e0(param_1,param_2);
  uVar6 = PrefabModule__GetOrCreatePoolParent_25376c0(param_1,param_2);
  puVar3 = PTR_DAT_049ca240;
  puVar2 = PTR_DAT_049c3bd8;
  if (lVar5 == 0) {
LAB_026387e8:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 0263875c to 0273877f has its CatchHandler @ 02639408 */
  iVar9 = param_3 - *(int *)(lVar5 + 0x18);
  if (iVar9 != 0 && *(int *)(lVar5 + 0x18) <= param_3) {
    do {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
                    /* try { // try from 02638790 to 02738793 has its CatchHandler @ 026393fc */
      lVar7 = UnityEngine_Object__Instantiate_object__2695b80(param_2,uVar6,*(undefined8 *)puVar2);
      if (lVar7 == 0) goto LAB_026387e8;
      UnityEngine_GameObject__SetActive_3c1ce34(lVar7,0,0);
      System_Collections_Generic_Stack___Il2CppFullySharedGenericType___Push_29a2df8
                (lVar5,lVar7,*(undefined8 *)puVar3);
                    /* try { // try from 026387c4 to 027387cf has its CatchHandler @ 026393f8 */
      PrefabModuleCallbackHelper__InvokeOnReturn_253838c(lVar7);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
                    /* try { // try from 026387e4 to 027387ef has its CatchHandler @ 026393cc */
  return;
}

