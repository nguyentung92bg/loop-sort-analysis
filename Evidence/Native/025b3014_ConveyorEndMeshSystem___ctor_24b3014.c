/* IL2CPP: ConveyorEndMeshSystem$$.ctor
void ConveyorEndMeshSystem___ctor (ConveyorEndMeshSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorEndMeshSystem$$.ctor
   void ConveyorEndMeshSystem___ctor (ConveyorEndMeshSystem_o* __this, const MethodInfo* method); */

undefined1  [16] ConveyorEndMeshSystem___ctor_24b3014(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_049c2820;
  puVar1 = PTR_DAT_049c2818;
                    /* try { // try from 025b3018 to 026b302f has its CatchHandler @ 025b3030 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b3018 with catch @ 025b3030
                       try { // try from 025b3030 to 026b3047 has its CatchHandler @ 025b3000 */
  if ((bRam0000000004f4bb73 & 1) == 0) {
                    /* try { // try from 025b3048 to 026b305f has its CatchHandler @ 025b3138 */
    FUN_021f03f8(PTR_DAT_049c2820);
    FUN_021f03f8(PTR_DAT_049c2818);
    bRam0000000004f4bb73 = 1;
  }
                    /* try { // try from 025b3060 to 026b3083 has its CatchHandler @ 025b3000 */
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x58),uVar3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
                    /* try { // try from 025b3084 to 026b3093 has its CatchHandler @ 025b3138 */
                    /* try { // try from 025b3094 to 026b313b has its CatchHandler @ 025b3000 */
  return auVar4;
}

