/* IL2CPP: Extensions$$SetProperty
void Extensions__SetProperty (UnityEngine_MaterialPropertyBlock_o* b, int32_t id, System_Single_array* v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$SetProperty
   void Extensions__SetProperty (UnityEngine_MaterialPropertyBlock_o* b, int32_t id,
   System_Single_array* v, const MethodInfo* method); */

void Extensions__SetProperty_3f0c5f8(long param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (param_3 != 0) {
    iVar1 = *(int *)(param_3 + 0x18);
    if (param_3 == 0) {
      thunk_FUN_02256840(PTR_DAT_049baa58);
      uVar3 = thunk_FUN_0222ca34();
      uVar2 = thunk_FUN_02256840(PTR_DAT_049ce7e8);
      System_ArgumentNullException___ctor_30655c4(uVar3,uVar2,0);
    }
    else {
      if (*(int *)(param_3 + 0x18) == 0) {
        thunk_FUN_02256840(PTR_DAT_049b9870);
        uVar3 = thunk_FUN_0222ca34();
        puVar4 = PTR_DAT_04a25ae0;
      }
      else {
        if (iVar1 <= *(int *)(param_3 + 0x18)) {
          if ((bRam0000000004f56e42 & 1) == 0) {
            FUN_021f03f8(PTR_DAT_04a25a98);
            FUN_021f03f8(PTR_DAT_04a25aa0);
            FUN_021f03f8(PTR_DAT_04a25aa8);
            bRam0000000004f56e42 = 1;
          }
          puVar4 = PTR_DAT_04a25a98;
          uStack_50 = 0;
          uStack_48 = 0;
          uStack_60 = 0;
          uStack_58 = 0;
          if (param_1 != 0) {
            lVar5 = *(long *)(param_1 + 0x10);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(param_1,0);
            }
            FUN_02432110(&uStack_50,param_3,*(undefined8 *)PTR_DAT_04a25aa0);
            uVar2 = System_Span___Il2CppFullySharedGenericType___GetPinnableReference_2998230
                              (&uStack_50,*(undefined8 *)puVar4);
            UnityEngine_Bindings_ManagedSpanWrapper___ctor_3c32fcc
                      (&uStack_60,uVar2,uStack_48 & 0xffffffff,0);
            if (pcRam0000000004f56eb0 == (code *)0x0) {
              pcRam0000000004f56eb0 = (code *)FUN_021f03bc(&UNK_013b70cc);
            }
            (*pcRam0000000004f56eb0)(lVar5,param_2,&uStack_60,iVar1);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        thunk_FUN_02256840(PTR_DAT_049b9870);
        uVar3 = thunk_FUN_0222ca34();
        puVar4 = PTR_DAT_04a25ae8;
      }
      uVar2 = thunk_FUN_02256840(puVar4);
      System_ArgumentException___ctor_306c238(uVar3,uVar2,0);
    }
    uVar2 = thunk_FUN_02256840(PTR_DAT_04a25af0);
                    /* WARNING: Subroutine does not return */
    FUN_021f0564(uVar3,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

