meta:
  id: animal_records
  endian: be
seq:
  - id: magic
    contents: [ 0xca, 0x77, 0x1e]
  - id: unused
    type: u1
  - id: version
    type: u2
  - id: record_count
    type: u2
  - id: records
    type: record
    repeat: expr
    repeat-expr: record_count

types:
  record:
    seq:
      - id: uuid
        size: 16
      - id: name
        type: str
        size: 24
        encoding: UTF-8
      - id: birth_year
        type: u2
      - id: weight
        type: f8
      - id: rating
        type: s4