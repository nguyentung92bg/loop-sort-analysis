/* IL2CPP: SandJellyRenderer$$.ctor
void SandJellyRenderer___ctor (SandJellyRenderer_o* __this, UnityEngine_Shader_o* shader, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandJellyRenderer$$.ctor
   void SandJellyRenderer___ctor (SandJellyRenderer_o* __this, UnityEngine_Shader_o* shader, const
   MethodInfo* method); */

void SandJellyRenderer___ctor_24d2098(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  puVar2 = PTR_DAT_049bccd0;
  puVar1 = PTR_DAT_049b89f8;
  if ((bRam0000000004f4bc1f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bccd0);
    FUN_021f03f8(PTR_DAT_049b89f8);
    FUN_021f03f8(PTR_DAT_049c7138);
    FUN_021f03f8(PTR_DAT_049c75b0);
    bRam0000000004f4bc1f = 1;
  }
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  UnityEngine_MaterialPropertyBlock___ctor_3bdbb78(uVar3,0);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x20),uVar3);
  System_Object___ctor_3142338(param_1,0);
  lVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Material___ctor_3be5d2c(lVar4,param_2,0);
  puVar1 = PTR_DAT_049c7138;
  if (lVar4 != 0) {
    UnityEngine_Object__set_name_3c233fc(lVar4,*(undefined8 *)PTR_DAT_049c75b0,0);
    UnityEngine_Object__set_hideFlags_3c2489c(lVar4,0x3d,0);
    *(long *)(param_1 + 0x10) = lVar4;
    thunk_FUN_021f190c((long *)(param_1 + 0x10),lVar4);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar3 = SandJellyRenderer__BuildMesh_24d21c0();
    puVar5 = (undefined8 *)(param_1 + 0x18);
    *puVar5 = uVar3;
    if (iRam0000000005174518 != 0) {
      FUN_023118d0(1L << ((ulong)puVar5 >> 0xc & 0x3f),
                   ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

