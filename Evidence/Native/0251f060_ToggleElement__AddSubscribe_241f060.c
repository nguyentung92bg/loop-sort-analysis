/* IL2CPP: ToggleElement$$AddSubscribe
void ToggleElement__AddSubscribe (ToggleElement_o* __this, System_Action_bool__o* onChange, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ToggleElement$$AddSubscribe
   void ToggleElement__AddSubscribe (ToggleElement_o* __this, System_Action_bool__o* onChange, const
   MethodInfo* method); */

void ToggleElement__AddSubscribe_241f060(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((bRam0000000004f4b770 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5230);
    bRam0000000004f4b770 = 1;
  }
  puVar1 = PTR_DAT_049b5230;
  lVar5 = *(long *)(param_1 + 0x98);
  do {
    lVar3 = System_Delegate__Combine_3145640(lVar5,param_2,0);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_0222c938(lVar3,uVar6);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f0a20(lVar3,uVar6);
      }
    }
    lVar3 = FUN_022290c4((long *)(param_1 + 0x98),lVar4,lVar5);
    bVar2 = lVar3 != lVar5;
    lVar5 = lVar3;
  } while (bVar2);
  return;
}

