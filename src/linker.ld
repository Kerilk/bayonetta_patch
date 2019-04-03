SECTIONS{

  . = 0x5db8000;
  .text : { *(.text) } = 0xcc
  . = 0x65b8000;
  .data : { *(.data) } = 0x00
}
