/* IL2CPP: LevelEnvironmentSystem$$CreateShineModel
void LevelEnvironmentSystem__CreateShineModel (LevelEnvironmentSystem_o* __this, UnityEngine_Vector3_o center, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: LevelEnvironmentSystem$$CreateShineModel
   void LevelEnvironmentSystem__CreateShineModel (LevelEnvironmentSystem_o* __this,
   UnityEngine_Vector3_o center, const MethodInfo* method); */

void LevelEnvironmentSystem__CreateShineModel_24ded94(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bc5a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bc5a = 1;
  }
  plVar4 = (long *)(param_1 + 0x60);
  lVar5 = *plVar4;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Inequality_3c1b96c(lVar5,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x38) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    lVar5 = PrefabModule__Rent_2537380
                      (*(long *)(param_1 + 0x30),*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x28),0
                      );
    *plVar4 = lVar5;
    thunk_FUN_021f190c(plVar4,lVar5);
    if (*plVar4 != 0) {
      lVar5 = UnityEngine_GameObject__get_transform_3c1ca74(*plVar4,0);
      if (cRam0000000004f4a68f == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a68f = '\x01';
      }
      if (*(long *)(param_1 + 0x38) != 0) {
        if (cRam0000000004f4a55e == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          cRam0000000004f4a55e = '\x01';
        }
        if (lVar5 != 0) {
          if ((bRam0000000004f58a09 & 1) == 0) {
            FUN_021f03f8(PTR_DAT_04a26ad0,0);
            bRam0000000004f58a09 = 1;
          }
          if (lVar5 != 0) {
            lVar3 = *(long *)(lVar5 + 0x10);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar5,0);
            }
            if (pcRam0000000004f58a38 == (code *)0x0) {
              pcRam0000000004f58a38 = (code *)FUN_021f03bc(&UNK_013e8d5f);
            }
            (*pcRam0000000004f58a38)(lVar3,&stack0xffffffffffffffd4);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

