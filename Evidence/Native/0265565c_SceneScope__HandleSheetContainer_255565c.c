/* IL2CPP: SceneScope$$HandleSheetContainer
void SceneScope__HandleSheetContainer (SceneScope_o* __this, VContainer_IContainerBuilder_o* builder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SceneScope$$HandleSheetContainer
   void SceneScope__HandleSheetContainer (SceneScope_o* __this, VContainer_IContainerBuilder_o*
   builder, const MethodInfo* method); */

void SceneScope__HandleSheetContainer_255565c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
                    /* try { // try from 02655668 to 0275567b has its CatchHandler @ 02655954 */
  if ((bRam0000000004f4c09e & 1) == 0) {
                    /* try { // try from 0265567c to 0275569b has its CatchHandler @ 02655980 */
    FUN_021f03f8(PTR_DAT_049cb0f0);
    FUN_021f03f8(PTR_DAT_049cb0f8);
    FUN_021f03f8(PTR_DAT_049caf18);
    FUN_021f03f8(PTR_DAT_049caf20);
    bRam0000000004f4c09e = 1;
  }
  uStack_30 = 0;
                    /* try { // try from 026556bc to 027556cb has its CatchHandler @ 0265593c */
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar1 = FUN_024f7024(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x50),&uStack_30,
                         *(undefined8 *)PTR_DAT_049caf20);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x68) != 0) {
                    /* try { // try from 026556e8 to 027556eb has its CatchHandler @ 02655934 */
                    /* try { // try from 026556f0 to 027556fb has its CatchHandler @ 02655938 */
      FUN_0235c744(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x50),&uStack_28,
                   *(undefined8 *)PTR_DAT_049caf18);
      if (CONCAT44(uStack_24,uStack_28) != 0) {
        lVar2 = PlaySessionModule__get_Current_2536d5c(CONCAT44(uStack_24,uStack_28),0);
                    /* try { // try from 02655710 to 0275579b has its CatchHandler @ 0265594c */
        plVar6 = (long *)(param_1 + 0x80);
        *plVar6 = lVar2;
        thunk_FUN_021f190c(plVar6,lVar2);
        plVar3 = (long *)*plVar6;
        if (plVar3 != (long *)0x0) {
          uVar4 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
          puVar5 = (undefined8 *)(param_1 + 0x88);
          *puVar5 = uVar4;
          thunk_FUN_021f190c(puVar5,uVar4);
          lVar2 = FUN_025e86c8(param_2,*puVar5,*(undefined8 *)PTR_DAT_049cb0f0);
          if (lVar2 != 0) {
            VContainer_RegistrationBuilder__AsSelf_3f1c334(lVar2,0);
            plVar6 = (long *)*plVar6;
            if (plVar6 != (long *)0x0) {
              uStack_28 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
              lVar2 = FUN_025e86c8(param_2,&uStack_28,*(undefined8 *)PTR_DAT_049cb0f8);
              if (lVar2 != 0) {
                VContainer_RegistrationBuilder__AsSelf_3f1c334(lVar2,0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

