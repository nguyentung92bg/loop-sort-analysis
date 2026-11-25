/* IL2CPP: HighlightModule$$Add
HighlightEntity_o HighlightModule__Add (HighlightModule_o* __this, UnityEngine_GameObject_o* target, UnityEngine_Mesh_o* mesh, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HighlightModule$$Add
   HighlightEntity_o HighlightModule__Add (HighlightModule_o* __this, UnityEngine_GameObject_o*
   target, UnityEngine_Mesh_o* mesh, const MethodInfo* method); */

void HighlightModule__Add_254de98(ulong *param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  
  if ((bRam0000000004f4c05a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2358);
    bRam0000000004f4c05a = 1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  HighlightModule__CombineSubmeshes_254df88(param_2,param_4);
  uStack_58 = 0;
  uStack_68 = (ulong)*(uint *)(param_2 + 0x20);
  *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) + 1;
  uStack_60 = param_3;
  thunk_FUN_021f190c(&uStack_60,param_3);
  uStack_58 = param_4;
  thunk_FUN_021f190c(&uStack_58,param_4);
  uStack_48 = uStack_60;
  uStack_50 = uStack_68;
  uStack_40 = uStack_58;
  if (*(long *)(param_2 + 0x38) != 0) {
    uStack_78 = uStack_60;
    uStack_80 = uStack_68;
    uStack_70 = uStack_58;
    FUN_02333498(*(long *)(param_2 + 0x38),&uStack_80,*(undefined8 *)PTR_DAT_049c2358);
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[2] = uStack_40;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

