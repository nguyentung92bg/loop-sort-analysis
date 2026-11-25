/* IL2CPP: SceneScope$$HandleWorld
void SceneScope__HandleWorld (SceneScope_o* __this, VContainer_IContainerBuilder_o* builder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SceneScope$$HandleWorld
   void SceneScope__HandleWorld (SceneScope_o* __this, VContainer_IContainerBuilder_o* builder,
   const MethodInfo* method); */

long * SceneScope__HandleWorld_2554e5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_049c8ed0;
  if ((bRam0000000004f4c09c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb078);
    FUN_021f03f8(PTR_DAT_049c8ed0);
    bRam0000000004f4c09c = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f4c0e7 == '\0') {
    FUN_021f03f8(PTR_DAT_049c8ed0);
    cRam0000000004f4c0e7 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  if (*(int *)(*(long *)(lVar2 + 0xb8) + 0x20) == 0x100) {
    lVar2 = 0;
  }
  else {
    uVar3 = thunk_FUN_0222ca34();
    Scellecs_Morpeh_World___ctor_32bc868(uVar3,0);
    lVar2 = FUN_0265c99c(uVar3,0);
  }
  plVar4 = (long *)(param_1 + 0x78);
  *plVar4 = lVar2;
  thunk_FUN_021f190c(plVar4);
  puVar1 = PTR_DAT_049cb078;
  lVar2 = *plVar4;
  if (lVar2 != 0) {
                    /* try { // try from 02654f34 to 02754f3b has its CatchHandler @ 02655030 */
    *(undefined1 *)(lVar2 + 0x14) = 1;
    plVar4 = (long *)VContainer_Unity_ContainerBuilderUnityExtensions__RegisterComponent___Il2CppFullySharedGenericType__25c7a64
                               (param_2,lVar2,*(undefined8 *)puVar1);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x198))(plVar4,plVar4[2],*(undefined8 *)(*plVar4 + 0x1a0));
      return plVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

