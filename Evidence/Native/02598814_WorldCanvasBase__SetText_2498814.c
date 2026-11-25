/* IL2CPP: WorldCanvasBase$$SetText
void WorldCanvasBase__SetText (WorldCanvasBase_o* __this, int32_t role, System_String_o* text, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WorldCanvasBase$$SetText
   void WorldCanvasBase__SetText (WorldCanvasBase_o* __this, int32_t role, System_String_o* text,
   const MethodInfo* method); */

void WorldCanvasBase__SetText_2498814(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lStack_38;
  
  lVar2 = *(long *)(param_1 + 0xa0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f5108f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049fac70,param_2,param_3,0);
    FUN_021f03f8(PTR_DAT_049fac78);
    bRam0000000004f5108f = 1;
  }
  puVar1 = PTR_DAT_049fac78;
  lVar3 = *(long *)(lVar2 + 0x38);
  if (lVar3 != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar4) {
        return;
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar3,iVar4,&lStack_38,*(undefined8 *)puVar1);
      if (lStack_38 == 0) break;
      if (*(int *)(lStack_38 + 0x18) == (int)param_2) {
        if (*(long *)(lVar2 + 0x38) == 0) break;
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (*(long *)(lVar2 + 0x38),iVar4,&lStack_38,*(undefined8 *)puVar1);
        if (lStack_38 == 0) break;
        StatefulUI_Runtime_References_TextReference__SetText_334627c(lStack_38,param_3);
      }
      lVar3 = *(long *)(lVar2 + 0x38);
      iVar4 = iVar4 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

