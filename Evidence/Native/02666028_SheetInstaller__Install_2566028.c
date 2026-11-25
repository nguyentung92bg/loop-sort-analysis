/* IL2CPP: SheetInstaller$$Install
void SheetInstaller__Install (SheetInstaller_o* __this, VContainer_IContainerBuilder_o* builder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SheetInstaller$$Install
   void SheetInstaller__Install (SheetInstaller_o* __this, VContainer_IContainerBuilder_o* builder,
   const MethodInfo* method); */

long * SheetInstaller__Install_2566028(long *param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = param_1;
  if ((bRam0000000004f4c15b & 1) == 0) {
                    /* try { // try from 0266604c to 0276605f has its CatchHandler @ 02666724 */
    plVar1 = (long *)FUN_021f03f8(PTR_DAT_049cbc00);
    bRam0000000004f4c15b = 1;
  }
  if ((char)param_1[4] != '\0') {
                    /* try { // try from 02666060 to 02766077 has its CatchHandler @ 02666720 */
    plVar1 = (long *)FUN_025e86c8(param_2,param_1[2],*(undefined8 *)PTR_DAT_049cbc00);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x198))(plVar1,plVar1[2],*(undefined8 *)(*plVar1 + 0x1a0));
      return plVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  return plVar1;
}

