/* IL2CPP: GameBehaviourBase$$RegisterView<object>
void GameBehaviourBase__RegisterView_object_ (GameBehaviourBase_o* __this, const MethodInfo_261A35C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameBehaviourBase$$RegisterView<object>
   void GameBehaviourBase__RegisterView_object_ (GameBehaviourBase_o* __this, const
   MethodInfo_261A35C* method); */

void GameBehaviourBase__RegisterView_object__261a35c(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_38;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_02229774(param_2);
  }
  lStack_38 = 0;
  uVar1 = Scellecs_Morpeh_WorldExtensions__IsNullOrDisposed_32bd5a8
                    (*(undefined8 *)(param_1 + 0x80),0);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_024f5544(*(undefined8 *)(param_1 + 0x80),**(undefined8 **)(param_2 + 0x38));
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar1 = FUN_024f5708(lVar2,*(undefined8 *)(param_1 + 0x60),
                         *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x10));
    if ((uVar1 & 1) == 0) {
      lStack_38 = 0;
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      lVar5 = *(long *)(*(long *)(param_2 + 0x38) + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02229718(lVar5);
      }
      lVar3 = thunk_FUN_0222c938(param_1,lVar5);
      if (lVar3 != 0) {
        lVar5 = *(long *)(*(long *)(param_2 + 0x38) + 0x20);
        lStack_38 = lVar3;
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02229718(lVar5);
        }
        lVar3 = thunk_FUN_0222c938(param_1,lVar5);
        if (lVar3 != 0) {
          thunk_FUN_021f190c(&lStack_38,lVar3);
          FUN_02735a04(lVar2,uVar4,&lStack_38,*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x28));
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f0a20(param_1,lVar5);
    }
  }
  return;
}

