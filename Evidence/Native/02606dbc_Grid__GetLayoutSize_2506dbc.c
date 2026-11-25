/* IL2CPP: Grid$$GetLayoutSize
UnityEngine_Vector2Int_o Grid__GetLayoutSize (Grid_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Grid$$GetLayoutSize
   UnityEngine_Vector2Int_o Grid__GetLayoutSize (Grid_o* __this, const MethodInfo* method); */

undefined8 Grid__GetLayoutSize_2506dbc(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 != 0) {
    iVar3 = *(int *)(param_1 + 0xc0);
    iVar4 = *(int *)(param_1 + 0xc4);
    iVar2 = iVar3;
    if (*(int *)(lVar5 + 0x3c) <= iVar3) {
      iVar2 = *(int *)(lVar5 + 0x3c);
    }
    iVar1 = *(int *)(lVar5 + 0x34);
    if (*(int *)(lVar5 + 0x34) <= iVar3) {
      iVar1 = iVar2;
    }
    iVar2 = iVar4;
    if (*(int *)(lVar5 + 0x40) <= iVar4) {
      iVar2 = *(int *)(lVar5 + 0x40);
    }
    iVar3 = *(int *)(lVar5 + 0x38);
    if (*(int *)(lVar5 + 0x38) <= iVar4) {
      iVar3 = iVar2;
    }
    return CONCAT44(iVar3,iVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

