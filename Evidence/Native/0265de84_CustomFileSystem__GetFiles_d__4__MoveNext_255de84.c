/* IL2CPP: CustomFileSystem.<GetFiles>d__4$$MoveNext
bool CustomFileSystem__GetFiles_d__4__MoveNext (CustomFileSystem__GetFiles_d__4_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CustomFileSystem.<GetFiles>d__4$$MoveNext
   bool CustomFileSystem__GetFiles_d__4__MoveNext (CustomFileSystem__GetFiles_d__4_o* __this, const
   MethodInfo* method); */

undefined8 CustomFileSystem__GetFiles_d__4__MoveNext_255de84(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if ((bRam0000000004f4c0fb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bbb40);
    bRam0000000004f4c0fb = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar3 = *(int *)(param_1 + 0x40) + 1;
    *(uint *)(param_1 + 0x40) = uVar3;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    puVar5 = (undefined8 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar1 = CustomFileSystem__UpdatePath_255d7e0(*puVar5);
    *puVar5 = uVar1;
    thunk_FUN_021f190c(puVar5,uVar1);
    uVar1 = UnityEngine_Resources__LoadAll_3c12e78(*puVar5,0);
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0x38),uVar1);
    uVar3 = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  plVar2 = (long *)(param_1 + 0x38);
  lVar4 = *plVar2;
  if (lVar4 != 0) {
    if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar3) {
      *plVar2 = 0;
      thunk_FUN_021f190c(plVar2,0);
      return 0;
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    lVar4 = *(long *)(lVar4 + (long)(int)uVar3 * 8 + 0x20);
    if (lVar4 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      uVar1 = UnityEngine_Object__get_name_3c232a8(lVar4,0);
                    /* try { // try from 0265df5c to 0275e097 has its CatchHandler @ 0265df5c
                       catch() { ... } // from try @ 0265df5c with catch @ 0265df5c
                       catch() { ... } // from try @ 0265e29c with catch @ 0265df5c
                       catch() { ... } // from try @ 0265e4cc with catch @ 0265df5c
                       catch() { ... } // from try @ 0265e534 with catch @ 0265df5c
                       catch() { ... } // from try @ 0265e5f8 with catch @ 0265df5c
                       catch() { ... } // from try @ 0265e624 with catch @ 0265df5c
                       catch() { ... } // from try @ 0265e68c with catch @ 0265df5c */
      if (*(int *)(*(long *)PTR_DAT_049bbb40 + 0xe4) == 0) {
        FUN_021f0574(*(long *)PTR_DAT_049bbb40);
      }
      uVar1 = System_IO_Path__Combine_30d2b84(uVar6,uVar1,0);
      *(undefined8 *)(param_1 + 0x18) = uVar1;
      thunk_FUN_021f190c((undefined8 *)(param_1 + 0x18),uVar1);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

