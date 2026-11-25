/* IL2CPP: Monitors$$IsRaycasterActive
bool Monitors__IsRaycasterActive (Monitors_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Monitors$$IsRaycasterActive
   bool Monitors__IsRaycasterActive (Monitors_o* __this, const MethodInfo* method); */

uint Monitors__IsRaycasterActive_256ebd8(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  
  puVar1 = PTR_DAT_049cc028;
                    /* try { // try from 0266ebe8 to 0276ebef has its CatchHandler @ 0266ee10 */
  if ((bRam0000000004f4c1b5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cc028);
                    /* try { // try from 0266ec08 to 0276ec13 has its CatchHandler @ 0266edec */
    bRam0000000004f4c1b5 = 1;
  }
  uVar2 = Monitors__IsActive_object__2688ab4(param_1,*(undefined8 *)puVar1);
                    /* try { // try from 0266ec24 to 0276ec2f has its CatchHandler @ 0266ee04 */
  return (uVar2 ^ 0xffffffff) & 1;
}

